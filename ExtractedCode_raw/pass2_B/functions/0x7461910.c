// rea decompile_all
// name: System.Security.Cryptography.MACTripleDES$$HashFinal
// address: 0x7461910
// body: available
// range: 0x7461910-0x7461a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7461a6c to 0x7461a74 System.Security.Cryptography.TailStream$$get_Buffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7461a70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_MACTripleDES__HashFinal(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09521189 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182f90);
    FUN_03f5c2a4(&DAT_0918b898);
    DAT_09521189 = 1;
  }
  if (param_1[6] == 0) {
    plVar6 = (long *)param_1[10];
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if (plVar6 == (long *)0x0) goto LAB_07461a70;
    (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x200));
    plVar6 = (long *)param_1[10];
    if (plVar6 == (long *)0x0) goto LAB_07461a70;
    lVar4 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
    param_1[6] = lVar4;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar4);
    plVar6 = (long *)param_1[10];
    if (plVar6 == (long *)0x0) goto LAB_07461a70;
    iVar2 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar4 = thunk_FUN_03f9944c(DAT_0918b898);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    System_Security_Cryptography_TailStream___ctor(lVar4,iVar1 >> 3);
    plVar6 = param_1 + 8;
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6,lVar4);
    lVar5 = *plVar6;
    lVar7 = param_1[6];
    lVar4 = thunk_FUN_03f9944c(DAT_09182f90);
    System_Security_Cryptography_CryptoStream___ctor(lVar4,lVar5,lVar7,1,0);
    param_1[7] = lVar4;
    thunk_FUN_03f5d7b8(param_1 + 7,lVar4);
  }
  if (param_1[7] != 0) {
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(param_1[7],0);
    if (param_1[8] != 0) {
      System_Security_Cryptography_TailStream__get_Buffer();
      return;
    }
  }
LAB_07461a70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

