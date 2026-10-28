// rea decompile_all
// name: Mono.Security.Cryptography.DSAManaged$$ExportParameters
// address: 0x74277d0
// body: available
// range: 0x74277d0-0x7427a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74279e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7427a38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7427a80 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_DSAManaged__ExportParameters
               (undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09520fb3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fb3 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(char *)(param_2 + 0x21) != '\0') {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09206680);
    uVar4 = Locale__GetText(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c71f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  if (*(char *)(param_2 + 0x20) == '\0') {
    Mono_Security_Cryptography_DSAManaged__Generate(param_2);
  }
  if ((param_3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Mono_Math_BigInteger__op_Equality(uVar4,0);
    if ((uVar1 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar4 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_0921fdd8);
      System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c71f8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
  }
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar4 = Mono_Math_BigInteger__GetBytes();
    local_70 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
    thunk_FUN_03f5d7b8(&local_70,local_70);
    if (*(long *)(param_2 + 0x30) != 0) {
      uVar4 = Mono_Math_BigInteger__GetBytes();
      uStack_68 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
      thunk_FUN_03f5d7b8((ulong)&local_70 | 8,uStack_68);
      if (*(long *)(param_2 + 0x38) != 0) {
        uVar4 = Mono_Math_BigInteger__GetBytes();
        local_60 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
        thunk_FUN_03f5d7b8(&local_60,local_60);
        if (*(long *)(param_2 + 0x48) != 0) {
          uVar4 = Mono_Math_BigInteger__GetBytes();
          local_58 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
          thunk_FUN_03f5d7b8(&local_58,local_58);
          if (*(char *)(param_2 + 100) == '\0') {
            if (*(long *)(param_2 + 0x50) == 0) goto LAB_074279e8;
            uVar4 = Mono_Math_BigInteger__GetBytes();
            local_50 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
            thunk_FUN_03f5d7b8(&local_50,local_50);
          }
          uVar4 = *(undefined8 *)(param_2 + 0x58);
          if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = Mono_Math_BigInteger__op_Inequality(uVar4,0);
          if ((uVar1 & 1) != 0) {
            if (*(long *)(param_2 + 0x58) == 0) goto LAB_074279e8;
            uVar4 = Mono_Math_BigInteger__GetBytes();
            local_40 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(uVar4,uVar4);
            thunk_FUN_03f5d7b8(&local_40,local_40);
            local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0x60));
          }
          if ((param_3 & 1) != 0) {
            if ((*(long *)(param_2 + 0x40) == 0) ||
               (lVar2 = Mono_Math_BigInteger__GetBytes(), lVar2 == 0)) goto LAB_074279e8;
            if (*(int *)(lVar2 + 0x18) == 0x14) {
              uStack_48 = Mono_Security_Cryptography_DSAManaged__NormalizeArray(lVar2,lVar2);
              thunk_FUN_03f5d7b8(&uStack_48,uStack_48);
            }
          }
          param_1[1] = uStack_68;
          *param_1 = local_70;
          param_1[3] = local_58;
          param_1[2] = local_60;
          param_1[5] = uStack_48;
          param_1[4] = local_50;
          param_1[7] = local_38;
          param_1[6] = local_40;
          return;
        }
      }
    }
  }
LAB_074279e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

