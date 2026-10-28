// rea decompile_all
// name: System.IO.BinaryReader$$FillBuffer
// address: 0x7583fd8
// body: available
// range: 0x7583fd8-0x75840f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7584080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75840e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75840ec to 0x7582080 System.IO.__Error$$FileNotOpen (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75840f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_BinaryReader__FillBuffer(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     ((param_2 < 0 || (*(int *)(*(long *)(param_1 + 0x18) + 0x18) < param_2)))) {
LAB_07584088:
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920f938);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09220080);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c3db0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_IO___Error__FileNotOpen();
  }
  if (param_2 == 1) {
    iVar1 = (**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
    if (iVar1 == -1) {
LAB_07584084:
      System_IO___Error__EndOfFile();
      goto LAB_07584088;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(char *)(lVar7 + 0x20) = (char)iVar1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = (**(code **)(*plVar3 + 0x368))
                        (plVar3,*(undefined8 *)(param_1 + 0x18),iVar1,param_2 - iVar1,
                         *(undefined8 *)(*plVar3 + 0x370));
      if (iVar2 == 0) goto LAB_07584084;
      iVar1 = iVar2 + iVar1;
      if (param_2 <= iVar1) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x10);
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

