// rea decompile_all
// name: System.Diagnostics.StackTrace$$ToString
// address: 0x754ff80
// body: available
// range: 0x754ff80-0x75500df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75500d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75500dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Diagnostics_StackTrace__ToString(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_48 [4];
  char local_44 [4];
  
  if ((DAT_0952192a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8ac8);
    DAT_0952192a = 1;
  }
  local_44[0] = '\0';
  local_48[0] = 0;
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  lVar6 = *(long *)(param_1 + 0x18);
  if ((lVar6 == 0) || (uVar5 = *(uint *)(lVar6 + 0x18), (int)uVar5 < 1)) {
    uVar1 = 0;
  }
  else {
    lVar7 = 0;
    uVar1 = 0;
    do {
      if (uVar5 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
      if (lVar3 == 0) goto LAB_075500d8;
      uVar1 = System_Diagnostics_StackTrace__AddFrames(lVar3,plVar2,uVar1 & 1,local_44);
      if (((uVar1 & 1) != 0) && (local_44[0] == '\0')) {
        uVar4 = System_Environment__get_NewLine(0);
        if (plVar2 == (long *)0x0) goto LAB_075500d8;
        System_Text_StringBuilder__Append(plVar2,uVar4,0);
        System_Text_StringBuilder__Append(plVar2,DAT_091f8ac8,0);
        uVar4 = System_Environment__get_NewLine(0);
        System_Text_StringBuilder__Append(plVar2,uVar4,0);
      }
      uVar5 = *(uint *)(lVar6 + 0x18);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < (int)uVar5);
  }
  System_Diagnostics_StackTrace__AddFrames(param_1,plVar2,uVar1 & 1,local_48);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x075500d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    return;
  }
LAB_075500d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

