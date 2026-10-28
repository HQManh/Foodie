// rea decompile_all
// name: Mono.Security.X509.PKCS12$$AddPrivateKey
// address: 0x73f544c
// body: available
// range: 0x73f544c-0x73f5643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f55cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f55d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f55d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f563c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f5640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f55d0) */

void Mono_Security_X509_PKCS12__AddPrivateKey(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char local_34 [4];
  long local_28;
  
  if ((DAT_09520e28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f9848);
    FUN_03f5c2a4(&DAT_091f97c8);
    DAT_09520e28 = 1;
  }
  local_28 = 0;
  local_34[0] = '\0';
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 != 0) {
    local_28 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__get_PrivateKey(param_2,0);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    plStack_88 = &local_28;
    local_90 = 0;
    uVar1 = System_String__op_Equality(uVar4,DAT_091f9848,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = System_String__op_Equality(uVar4,DAT_091f97c8,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = thunk_FUN_03fc39d4(&DAT_091f97d8);
        System_String__op_Equality(uVar4,uVar2,0);
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar4 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_09212438);
        System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091d56c0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar2);
      }
      Mono_Security_X509_PKCS12__GetExistingParameters(&local_d0,param_1,local_34);
      uStack_78 = uStack_c8;
      local_80 = local_d0;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      uStack_48 = uStack_98;
      uStack_50 = uStack_a0;
      if (local_34[0] != '\0') {
        plVar3 = *(long **)(param_1 + 0x18);
        uStack_108 = uStack_c8;
        local_110 = local_d0;
        uStack_f8 = uStack_b8;
        uStack_100 = uStack_c0;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uVar4 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeDSA(local_28,&local_110,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar4,uVar4);
        }
        (**(code **)(*plVar3 + 0x308))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x310));
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 0x18);
      uVar4 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo__DecodeRSA(local_28,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      (**(code **)(*plVar3 + 0x308))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x310));
    }
    if (local_28 != 0) {
      System_Array__Clear(local_28,0,*(undefined4 *)(local_28 + 0x18),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

