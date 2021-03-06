 ///
 /// @file    func.h
 /// @author  faith(kh_faith@qq.com)
 /// @date    2018-06-28 17:52:18
 ///

#ifndef __FUN_H__
#define __FUN_H__
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>
ngx_int_t query_string(ngx_http_request_t *r,u_char *match_name,ngx_str_t match_str);
ngx_int_t read_file(ngx_http_request_t *r,u_char *realfilename,u_char *sion,u_char *key);
ngx_int_t deAes(u_char *c, ngx_int_t clen, u_char *key); 
ngx_int_t aes(u_char *p, ngx_int_t plen, u_char *key);
ngx_int_t deaes_data(ngx_http_request_t *r,u_char *data,u_char *requesttime,u_char *key);

ngx_int_t cJSON_to_str(char *json_string,u_char *serdata,ngx_http_request_t *r);
ngx_int_t cJSON_to_array(char *text,u_char *key,u_char *session,ngx_http_request_t *r);
#endif
