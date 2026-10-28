// rea decompile_all
// name: System.Security.Cryptography.DSACryptoServiceProvider$$Common
// address: 0x7472cd4
// body: available
// range: 0x7472cd4-0x7472f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7472f18 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7472f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7472f20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DSACryptoServiceProvider__Common
               (long *param_1,undefined4 param_2,byte param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09521203 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182fa8);
    FUN_03f5c2a4(&DAT_091c71f0);
    FUN_03f5c2a4(&DAT_091831d8);
    FUN_03f5c2a4(&DAT_091831e0);
    FUN_03f5c2a4(&DAT_0918fce0);
    FUN_03f5c2a4(&DAT_09187500);
    FUN_03f5c2a4(&DAT_09180228);
    FUN_03f5c2a4(&DAT_09187510);
    DAT_09521203 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_09180228,1);
  plVar4 = param_1 + 3;
  *plVar4 = lVar1;
  thunk_FUN_03f5d7b8(plVar4,lVar1);
  lVar1 = *plVar4;
  uVar2 = thunk_FUN_03f9944c(DAT_09187510);
  System_Security_Cryptography_KeySizes___ctor(uVar2,0x200,0x400,0x40,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),uVar2);
    (**(code **)(*param_1 + 0x1a8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1b0));
    lVar1 = thunk_FUN_03f9944c(DAT_091831e0);
    Mono_Security_Cryptography_DSAManaged___ctor(lVar1,param_2,0);
    plVar4 = param_1 + 6;
    *plVar4 = lVar1;
    thunk_FUN_03f5d7b8(plVar4,lVar1);
    lVar1 = *plVar4;
    uVar2 = thunk_FUN_03f9944c(DAT_0918fce0);
    Mono_Security_Cryptography_DSAManaged_KeyGeneratedEventHandler___ctor
              (uVar2,param_1,DAT_091c71f0,0);
    if (lVar1 != 0) {
      Mono_Security_Cryptography_DSAManaged__add_KeyGenerated(lVar1,uVar2,0);
      *(byte *)(param_1 + 5) = param_3 & 1;
      if ((param_3 & 1) != 0) {
        return;
      }
      lVar1 = thunk_FUN_03f9944c(DAT_09182fa8);
      System_Security_Cryptography_CspParameters___ctor(lVar1,0xd,0);
      if (**(char **)(DAT_091831d8 + 0xb8) != '\0') {
        if (lVar1 == 0) goto LAB_07472f1c;
        System_Security_Cryptography_CspParameters__set_Flags(lVar1,*(uint *)(lVar1 + 0x2c) | 1,0);
      }
      lVar3 = thunk_FUN_03f9944c(DAT_09187500);
      Mono_Security_Cryptography_KeyPairPersistence___ctor(lVar3,lVar1,0);
      param_1[4] = lVar3;
      thunk_FUN_03f5d7b8(param_1 + 4,lVar3);
      return;
    }
  }
LAB_07472f1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

