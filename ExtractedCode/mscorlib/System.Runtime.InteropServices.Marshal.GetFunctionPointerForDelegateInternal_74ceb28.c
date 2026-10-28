// rea decompile_all
// name: System.Runtime.InteropServices.Marshal$$GetFunctionPointerForDelegateInternal
// address: 0x74ceb28
// body: available
// range: 0x74ceb28-0x74ceb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegateInternal
               (long param_1,undefined8 param_2,basic_string *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  byte abStack_108 [16];
  void *pvStack_f8;
  byte abStack_f0 [16];
  void *pvStack_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_d8 [16];
  void *pvStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  void *pvStack_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_a8 [16];
  void *pvStack_98;
  ulong uStack_90;
  ulong uStack_88;
  void *pvStack_80;
  ulong uStack_70;
  ulong uStack_68;
  void *pvStack_60;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  char acStack_38 [24];
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x30) != 0)) ||
     (lVar2 = FUN_03fc35ac(**(undefined8 **)(*(long *)(param_1 + 0x28) + 0x20)), lVar2 != 0)) {
    return;
  }
  FUN_03fadd8c(acStack_38,*(undefined8 *)(param_1 + 0x28));
  uVar3 = FUN_03fadb6c(*(undefined8 *)(param_1 + 0x28));
  if ((uVar3 & 1) != 0) {
    std::__ndk1::operator+
              ((__ndk1 *)
               "IL2CPP does not support marshaling delegates that point to instance methods to native code. The method we\'re attempting to marshal is: "
               ,acStack_38,param_3);
    uVar3 = (ulong)&uStack_50 | 1;
    if (((byte)uStack_50._0_1_ & 1) != 0) {
      uVar3 = uStack_40;
    }
    uVar4 = FUN_03fa6ecc(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar4,0);
  }
  uVar3 = FUN_03faded4(*(undefined8 *)(param_1 + 0x28));
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
    if ((lVar2 != 0) && (uVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x28) + 0x52), uVar3 != 0)) {
      uVar7 = 0;
      do {
        plVar8 = *(long **)(lVar2 + uVar7 * 8);
        while( true ) {
          if ((*(uint *)(plVar8 + 1) & 0xff0000) == 0x150000) {
            std::__ndk1::operator+((__ndk1 *)"Cannot marshal method \'",acStack_38,param_3);
            puVar5 = (ulong *)std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append(abStack_a8,"\' parameter \'");
            pvStack_80 = (void *)puVar5[2];
            uStack_88 = puVar5[1];
            uStack_90 = *puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            pcVar6 = (char *)FUN_03fadba4(*(undefined8 *)(param_1 + 0x28),uVar7);
            puVar5 = (ulong *)std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&uStack_90,pcVar6);
            pvStack_60 = (void *)puVar5[2];
            uStack_68 = puVar5[1];
            uStack_70 = *puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            puVar5 = (ulong *)std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&uStack_70,"\': Generic types cannot be marshaled.");
            uStack_40 = puVar5[2];
            uStack_48 = puVar5[1];
            uStack_50 = *puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            if ((uStack_70 & 1) != 0) {
              operator_delete(pvStack_60);
            }
            if ((uStack_90 & 1) != 0) {
              operator_delete(pvStack_80);
            }
            if (((byte)abStack_a8[0] & 1) != 0) {
              operator_delete(pvStack_98);
            }
            uVar3 = (ulong)&uStack_50 | 1;
            if ((uStack_50 & 1) != 0) {
              uVar3 = uStack_40;
            }
            uVar4 = FUN_03fa7078(uVar3);
                    /* WARNING: Subroutine does not return */
            FUN_03fa5c38(uVar4,0);
          }
          if ((*(uint *)(plVar8 + 1) & 0xff0000) != 0x1d0000) break;
          plVar8 = (long *)*plVar8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
    std::__ndk1::operator+
              ((__ndk1 *)
               "To marshal a managed method, please add an attribute named \'MonoPInvokeCallback\' to the method definition. The method we\'re attempting to marshal is: "
               ,acStack_38,param_3);
    uVar3 = (ulong)&uStack_50 | 1;
    if (((byte)uStack_50._0_1_ & 1) != 0) {
      uVar3 = uStack_40;
    }
    uVar4 = FUN_03fa6ecc(uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar4,0);
  }
  std::__ndk1::operator+
            ((__ndk1 *)
             "IL2CPP does not support marshaling generic delegates when full generic sharing is enabled. The method we\'re attempting to marshal is: "
             ,acStack_38,param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &uStack_50,
         "\nTo marshal this delegate, please add an attribute named \'MonoPInvokeCallback\' to the method definition."
        );
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &uStack_50,
         "\nThis attribute should have a type argument which is a generic delegate with all of the types required for this generic instantiation:"
        );
  FUN_03f9a458(&uStack_70,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x40) + 8));
  uVar3 = uStack_70 >> 1 & 0x7f;
  if ((uStack_70 & 1) != 0) {
    uVar3 = uStack_68;
  }
  if (uVar3 != 0) {
    std::__ndk1::operator+((__ndk1 *)"\nGeneric type arguments: ",(char *)&uStack_70,param_3);
    FUN_03f6aab8(&uStack_50,&uStack_90);
    if ((uStack_90 & 1) != 0) {
      operator_delete(pvStack_80);
    }
  }
  FUN_03f9a458(&uStack_90,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x40) + 0x10));
  uVar3 = (ulong)((byte)uStack_90._0_1_ >> 1);
  if (((byte)uStack_90._0_1_ & 1) != 0) {
    uVar3 = uStack_88;
  }
  if (uVar3 != 0) {
    std::__ndk1::operator+((__ndk1 *)"\nGeneric method arguments: ",(char *)&uStack_90,param_3);
    FUN_03f6aab8(&uStack_50,abStack_a8);
    if (((byte)abStack_a8[0] & 1) != 0) {
      operator_delete(pvStack_98);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &uStack_50,"\nThis C# code should work, for example:");
  uVar3 = (ulong)((byte)uStack_70._0_1_ >> 1);
  if (((byte)uStack_70._0_1_ & 1) != 0) {
    uVar3 = uStack_68;
  }
  puVar1 = &DAT_01a45042;
  if (uVar3 != 0) {
    puVar1 = &DAT_01a3f22e;
  }
  FUN_03f6321c(abStack_a8,puVar1);
  std::__ndk1::operator+
            ((__ndk1 *)"\n[MonoPInvokeCallback(typeof(System.Action<",(char *)&uStack_70,param_3);
  FUN_03f6efc0(abStack_f0,abStack_108,abStack_a8);
  FUN_03f6efc0(abStack_d8,abStack_f0,&uStack_90);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(abStack_d8,">))]");
  pvStack_b0 = (void *)puVar5[2];
  uStack_b8 = puVar5[1];
  uStack_c0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_03f6aab8(&uStack_50,&uStack_c0);
  if ((uStack_c0 & 1) != 0) {
    operator_delete(pvStack_b0);
  }
  if (((byte)abStack_d8[0] & 1) != 0) {
    operator_delete(pvStack_c8);
  }
  if ((abStack_f0[0] & 1) != 0) {
    operator_delete(pvStack_e0);
  }
  if ((abStack_108[0] & 1) != 0) {
    operator_delete(pvStack_f8);
  }
  uVar3 = (ulong)&uStack_50 | 1;
  if (((byte)uStack_50._0_1_ & 1) != 0) {
    uVar3 = uStack_40;
  }
  uVar4 = FUN_03fa6ecc(uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar4,0);
}

