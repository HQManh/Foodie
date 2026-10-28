// rea decompile_all
// name: FUN_03f8a6a8
// address: 0x3f8a6a8
// body: available
// range: 0x3f8a6a8-0x3f8a9c3 inclusive
// range: 0x3f8aa0c-0x3f8aa0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8aa0c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8a6a8(char *param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *__ptr;
  void *__ptr_00;
  char *pcVar4;
  undefined8 uVar5;
  socklen_t __len;
  void *pvVar6;
  addrinfo *paVar7;
  bool bVar8;
  ulong uVar9;
  addrinfo local_f0;
  addrinfo *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_03f8aa10();
  if (((uVar3 & 1) == 0) || ((param_2 & 1) != 0)) {
    FUN_03f8a590(param_1);
  }
  local_c0 = (addrinfo *)0x0;
  local_f0.ai_addr = (sockaddr *)0x0;
  local_f0.ai_addrlen = 0;
  local_f0._20_4_ = 0;
  local_f0.ai_next = (addrinfo *)0x0;
  local_f0.ai_canonname = (char *)0x0;
  local_f0.ai_socktype = 1;
  local_f0.ai_protocol = 0;
  local_f0.ai_flags = 0x402;
  local_f0.ai_family = 0;
  if (*param_1 == '\0') {
    paVar7 = local_c0;
    if ((param_2 & 1) == 0) goto joined_r0x03f8a86c;
LAB_03f8a750:
    paVar7 = local_c0;
    local_b8 = 0;
    __ptr = (void *)FUN_03f8cab0(2,(long)&local_b8 + 4);
    __ptr_00 = (void *)FUN_03f8cab0(10,&local_b8);
    iVar2 = (int)local_b8;
    uVar3 = local_b8 & 0xffffffff;
    uVar9 = (ulong)local_b8._4_4_;
    if (local_b8._4_4_ == 0 && (int)local_b8 == 0) {
      free(__ptr);
      free(__ptr_00);
      goto joined_r0x03f8a86c;
    }
    bVar8 = 0 < (int)local_b8._4_4_;
    pvVar6 = __ptr;
    if (0 < (int)local_b8._4_4_) {
      do {
        inet_ntop(2,pvVar6,(char *)&local_b0,0x10);
        FUN_03f6321c(local_98,&local_b0);
        FUN_03f8cce0(param_4,local_98);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        uVar9 = uVar9 - 1;
        pvVar6 = (void *)((long)pvVar6 + 4);
      } while (uVar9 != 0);
    }
    pvVar6 = __ptr_00;
    if (0 < iVar2) {
      do {
        pcVar4 = inet_ntop(10,pvVar6,(char *)local_98,0x30);
        if (pcVar4 != (char *)0x0) {
          FUN_03f6321c(&local_b0,local_98);
          FUN_03f8cce0(param_4,&local_b0);
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          bVar8 = true;
        }
        uVar3 = uVar3 - 1;
        pvVar6 = (void *)((long)pvVar6 + 0x10);
      } while (uVar3 != 0);
    }
    free(__ptr);
    free(__ptr_00);
    if ((paVar7 != (addrinfo *)0x0) && (!bVar8)) goto LAB_03f8a870;
  }
  else {
    iVar2 = getaddrinfo(param_1,(char *)0x0,&local_f0,&local_c0);
    if (iVar2 == -1) {
      uVar5 = 0xfffffffd;
      goto LAB_03f8a994;
    }
    paVar7 = local_c0;
    if ((param_2 & 1) != 0) goto LAB_03f8a750;
joined_r0x03f8a86c:
    if (paVar7 != (addrinfo *)0x0) {
LAB_03f8a870:
      bVar8 = false;
      do {
        if (paVar7->ai_family == 10) {
          iVar2 = 10;
          __len = 0x30;
          pcVar4 = paVar7->ai_canonname + 8;
LAB_03f8a8b4:
          pcVar4 = inet_ntop(iVar2,pcVar4,(char *)local_98,__len);
          if (pcVar4 == (char *)0x0) {
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = (void *)0x0;
            FUN_03f8cce0(param_4,&local_b0);
          }
          else {
            FUN_03f6321c(&local_b0,local_98);
            FUN_03f8cce0(param_4,&local_b0);
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          if (!bVar8) {
            if (paVar7->ai_addr == (sockaddr *)0x0) {
              if ((*param_3 & 1) != 0) {
                operator_delete((void *)param_3[2]);
              }
              bVar8 = true;
              *param_3 = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              goto LAB_03f8a934;
            }
            FUN_03f6321c(&local_b0);
            if ((*param_3 & 1) != 0) {
              operator_delete((void *)param_3[2]);
            }
            param_3[1] = uStack_a8;
            *param_3 = local_b0;
            param_3[2] = (ulong)local_a0;
          }
          bVar8 = true;
        }
        else if (paVar7->ai_family == 2) {
          iVar2 = 2;
          __len = 0x10;
          pcVar4 = paVar7->ai_canonname + 4;
          goto LAB_03f8a8b4;
        }
LAB_03f8a934:
        paVar7 = paVar7->ai_next;
      } while (paVar7 != (addrinfo *)0x0);
    }
  }
  if (local_c0 != (addrinfo *)0x0) {
    freeaddrinfo(local_c0);
  }
  uVar3 = (ulong)(byte)((byte)*param_3 >> 1);
  if (((byte)*param_3 & 1) != 0) {
    uVar3 = param_3[1];
  }
  if (uVar3 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_3);
  }
  uVar5 = 0;
LAB_03f8a994:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

