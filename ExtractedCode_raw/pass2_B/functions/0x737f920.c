// rea decompile_all
// name: AppLovinMax.Internal.MaxWebRequest.<Send>d__5$$MoveNext
// address: 0x737f920
// body: available
// range: 0x737f920-0x737fadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737fad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AppLovinMax_Internal_MaxWebRequest_<Send>d__5__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_095209f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174b38);
    FUN_03f5c2a4(&DAT_09179230);
    FUN_03f5c2a4(&DAT_091ecd70);
    FUN_03f5c2a4(&DAT_091ecd80);
    FUN_03f5c2a4(&DAT_091927a0);
    FUN_03f5c2a4(&DAT_09192798);
    DAT_095209f2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_03f9944c(DAT_091927a0);
    System_Object___ctor(lVar2,0);
    if (lVar2 == 0) {
LAB_0737fad8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09192798 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09192798 + 0xb8);
    lVar7 = puVar5[1];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09192798 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_09192798 + 0xb8);
      }
      uVar8 = *puVar5;
      lVar7 = thunk_FUN_03f9944c(DAT_09179230);
      FUN_05324070(lVar7,uVar8,DAT_091ecd70,0);
      plVar3 = (long *)(*(long *)(DAT_09192798 + 0xb8) + 8);
      *plVar3 = lVar7;
      thunk_FUN_03f5d7b8(plVar3,lVar7);
    }
    uVar8 = thunk_FUN_03f9944c(DAT_09174b38);
    FUN_070a8c30(uVar8,lVar2,DAT_091ecd80,0);
    if (lVar6 == 0) goto LAB_0737fad8;
    uVar8 = AppLovinMax_Internal_MaxWebRequest__SendInternal(lVar6,lVar7,uVar8);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    thunk_FUN_03f5d7b8();
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0737fabc;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0737fabc:
  return iVar1 == 0;
}

