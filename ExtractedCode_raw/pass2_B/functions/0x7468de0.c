// rea decompile_all
// name: System.Security.Cryptography.RSACryptoServiceProvider$$Common
// address: 0x7468de0
// body: available
// range: 0x7468de0-0x7468f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7468ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7468f08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RSACryptoServiceProvider__Common(long *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_095211b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187500);
    DAT_095211b0 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09187500);
  Mono_Security_Cryptography_KeyPairPersistence___ctor(lVar2,param_2,0);
  plVar6 = param_1 + 4;
  *plVar6 = lVar2;
  thunk_FUN_03f5d7b8(plVar6,lVar2);
  if ((*plVar6 != 0) &&
     (uVar3 = Mono_Security_Cryptography_KeyPairPersistence__Load(*plVar6,0), param_2 != 0)) {
    uVar1 = *(uint *)(param_2 + 0x2c);
    *(bool *)((long)param_1 + 0x2a) = (uVar1 & 4) == 0;
    if ((uVar1 & 8) != 0 && (uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09182f98);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_092066a0);
      System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d6db8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    if (*plVar6 != 0) {
      lVar2 = *(long *)(*plVar6 + 0x18);
      if (lVar2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1b8);
        uVar4 = *(undefined8 *)(*param_1 + 0x1c0);
        *(undefined1 *)((long)param_1 + 0x29) = 1;
                    /* WARNING: Could not recover jumptable at 0x07468eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,lVar2,uVar4);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

