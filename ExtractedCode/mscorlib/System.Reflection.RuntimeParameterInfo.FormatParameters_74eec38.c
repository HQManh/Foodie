// rea decompile_all
// name: System.Reflection.RuntimeParameterInfo$$FormatParameters
// address: 0x74eec38
// body: available
// range: 0x74eec38-0x74eee2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74eee20 to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74eee24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74eee28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeParameterInfo__FormatParameters
               (long param_1,long param_2,uint param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_0952162b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f5ed0);
    FUN_03f5c2a4(&DAT_091f9088);
    DAT_0952162b = 1;
  }
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    if (0 < (int)lVar6) {
      uVar7 = 0;
      do {
        uVar5 = (uint)lVar6;
        if (uVar7 != 0) {
          if (param_1 == 0) goto LAB_074eee24;
          System_Text_StringBuilder__Append(param_1,DAT_091f86e8,0);
          uVar5 = *(uint *)(param_2 + 0x18);
        }
        if (uVar5 <= uVar7) {
LAB_074eee28:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar1 = *(long **)(param_2 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_074eee24;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
        if (plVar1 == (long *)0x0) goto LAB_074eee24;
        lVar6 = (**(code **)(*plVar1 + 0x988))(plVar1,param_4 & 1,*(undefined8 *)(*plVar1 + 0x990));
        uVar2 = System_Type__get_IsByRef(plVar1,0);
        if (((uVar2 & 1) == 0) || ((param_4 & 1) != 0)) {
          if (param_1 == 0) goto LAB_074eee24;
        }
        else {
          lVar3 = FUN_03f5c394(DAT_0917fcc8,1);
          if (lVar3 == 0) goto LAB_074eee24;
          if (*(int *)(lVar3 + 0x18) == 0) goto LAB_074eee28;
          *(undefined2 *)(lVar3 + 0x20) = 0x26;
          if ((lVar6 == 0) || (uVar4 = System_String__TrimEnd(lVar6,lVar3,0), param_1 == 0))
          goto LAB_074eee24;
          System_Text_StringBuilder__Append(param_1,uVar4,0);
          lVar6 = DAT_091f5ed0;
        }
        System_Text_StringBuilder__Append(param_1,lVar6,0);
        lVar6 = *(long *)(param_2 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)lVar6);
    }
    if ((param_3 >> 1 & 1) == 0) {
      return;
    }
    if (lVar6 == 0) {
      if (param_1 == 0) goto LAB_074eee24;
    }
    else {
      if (param_1 == 0) goto LAB_074eee24;
      System_Text_StringBuilder__Append(param_1,DAT_091f86e8,0);
    }
    System_Text_StringBuilder__Append(param_1,DAT_091f9088,0);
    return;
  }
LAB_074eee24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

