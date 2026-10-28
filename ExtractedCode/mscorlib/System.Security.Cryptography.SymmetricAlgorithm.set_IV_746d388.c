// rea decompile_all
// name: System.Security.Cryptography.SymmetricAlgorithm$$set_IV
// address: 0x746d388
// body: available
// range: 0x746d388-0x746d4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746d440 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x746d44c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746d494 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746d4e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SymmetricAlgorithm__set_IV(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095211e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_095211e0 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091daaa0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if (*(int *)(param_2 + 0x18) != iVar1 >> 3) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920d650);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar6 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091daaa0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  }
  lVar3 = System_Array__Clone(param_2,0);
  uVar5 = DAT_0917fc88;
  if (lVar3 == 0) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_0746d430:
    thunk_FUN_03f5d7b8(param_1 + 0x18,lVar4);
    return;
  }
  lVar4 = thunk_FUN_03f99350(lVar3,DAT_0917fc88);
  uVar6 = DAT_0917fc88;
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x18) = lVar4;
    lVar4 = thunk_FUN_03f99350(lVar3,uVar6);
    uVar5 = uVar6;
    if (lVar4 != 0) goto LAB_0746d430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(lVar3,uVar5);
}

