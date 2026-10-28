// rea decompile_all
// name: Mono.Security.Cryptography.RSAManaged$$ExportParameters
// address: 0x7409870
// body: available
// range: 0x7409870-0x7409bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7409b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7409bac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7409bf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_RSAManaged__ExportParameters
               (undefined8 *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_09520ed8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ed8 = 1;
  }
  lStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(char *)((long)param_2 + 0x23) != '\0') {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09206680);
    uVar3 = Locale__GetText(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar4 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d6df0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  if (*(char *)((long)param_2 + 0x22) == '\0') {
    Mono_Security_Cryptography_RSAManaged__GenerateKeyPair(param_2);
  }
  lStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_2[0xc] != 0) {
    local_70 = Mono_Math_BigInteger__GetBytes();
    thunk_FUN_03f5d7b8(&local_70,local_70);
    if (param_2[0xb] != 0) {
      lStack_68 = Mono_Math_BigInteger__GetBytes();
      thunk_FUN_03f5d7b8((ulong)&local_70 | 8,lStack_68);
      if ((param_3 & 1) == 0) {
LAB_07409b38:
        param_1[1] = lStack_68;
        *param_1 = local_70;
        param_1[3] = local_58;
        param_1[2] = local_60;
        param_1[5] = uStack_48;
        param_1[4] = local_50;
        param_1[7] = local_38;
        param_1[6] = local_40;
        return;
      }
      lVar5 = param_2[5];
      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Mono_Math_BigInteger__op_Equality(lVar5,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_09207fb8);
        System_Security_Cryptography_CryptographicException___ctor(uVar3,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d6df0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar4);
      }
      if (param_2[5] != 0) {
        local_38 = Mono_Math_BigInteger__GetBytes();
        thunk_FUN_03f5d7b8(&local_38,local_38);
        if ((local_38 != 0) && (lStack_68 != 0)) {
          if (*(int *)(local_38 + 0x18) != *(int *)(lStack_68 + 0x18)) {
            lVar5 = FUN_03f5c394(DAT_0917fc88);
            if ((lVar5 == 0) || (local_38 == 0)) goto LAB_07409b5c;
            System_Buffer__BlockCopy
                      (local_38,0,lVar5,*(int *)(lVar5 + 0x18) - *(int *)(local_38 + 0x18),
                       *(int *)(local_38 + 0x18),0);
            local_38 = lVar5;
            thunk_FUN_03f5d7b8(&local_38,lVar5);
          }
          lVar5 = param_2[6];
          if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Mono_Math_BigInteger__op_Inequality(lVar5,0);
          if ((uVar2 & 1) != 0) {
            lVar5 = param_2[7];
            if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = Mono_Math_BigInteger__op_Inequality(lVar5,0);
            if ((uVar2 & 1) != 0) {
              lVar5 = param_2[8];
              if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = Mono_Math_BigInteger__op_Inequality(lVar5,0);
              if ((uVar2 & 1) != 0) {
                lVar5 = param_2[9];
                if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = Mono_Math_BigInteger__op_Inequality(lVar5,0);
                if ((uVar2 & 1) != 0) {
                  lVar5 = param_2[10];
                  if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = Mono_Math_BigInteger__op_Inequality(lVar5,0);
                  if ((uVar2 & 1) != 0) {
                    uVar3 = (**(code **)(*param_2 + 0x198))
                                      (param_2,*(undefined8 *)(*param_2 + 0x1a0));
                    iVar1 = (int)uVar3 >> 4;
                    local_60 = Mono_Security_Cryptography_RSAManaged__GetPaddedValue
                                         (uVar3,param_2[6],iVar1);
                    uVar3 = thunk_FUN_03f5d7b8(&local_60,local_60);
                    local_58 = Mono_Security_Cryptography_RSAManaged__GetPaddedValue
                                         (uVar3,param_2[7],iVar1);
                    uVar3 = thunk_FUN_03f5d7b8(&local_58,local_58);
                    local_50 = Mono_Security_Cryptography_RSAManaged__GetPaddedValue
                                         (uVar3,param_2[8],iVar1);
                    uVar3 = thunk_FUN_03f5d7b8(&local_50,local_50);
                    uStack_48 = Mono_Security_Cryptography_RSAManaged__GetPaddedValue
                                          (uVar3,param_2[9],iVar1);
                    uVar3 = thunk_FUN_03f5d7b8(&uStack_48,uStack_48);
                    local_40 = Mono_Security_Cryptography_RSAManaged__GetPaddedValue
                                         (uVar3,param_2[10],iVar1);
                    thunk_FUN_03f5d7b8(&local_40,local_40);
                  }
                }
              }
            }
          }
          goto LAB_07409b38;
        }
      }
    }
  }
LAB_07409b5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

