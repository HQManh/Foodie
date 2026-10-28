// rea decompile_all
// name: System.Reflection.MethodBase$$ConstructParameters
// address: 0x74e0e68
// body: available
// range: 0x74e0e68-0x74e105f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e1058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e105c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_MethodBase__ConstructParameters(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  
  if ((DAT_09521597 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f5ed0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f9088);
    DAT_09521597 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x18);
    uVar5 = DAT_091f5700;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        if (uVar6 <= uVar8) {
LAB_074e105c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (plVar1 == (long *)0x0) goto LAB_074e1058;
        plVar7 = *(long **)(param_1 + (long)(int)uVar8 * 8 + 0x20);
        System_Text_StringBuilder__Append(plVar1,uVar5,0);
        if (plVar7 == (long *)0x0) goto LAB_074e1058;
        lVar2 = (**(code **)(*plVar7 + 0x988))(plVar7,param_3 & 1,*(undefined8 *)(*plVar7 + 0x990));
        uVar3 = System_Type__get_IsByRef(plVar7,0);
        if (((uVar3 & 1) != 0) && ((param_3 & 1) == 0)) {
          lVar4 = FUN_03f5c394(DAT_0917fcc8,1);
          if (lVar4 == 0) goto LAB_074e1058;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_074e105c;
          *(undefined2 *)(lVar4 + 0x20) = 0x26;
          if (lVar2 == 0) goto LAB_074e1058;
          uVar5 = System_String__TrimEnd(lVar2,lVar4,0);
          System_Text_StringBuilder__Append(plVar1,uVar5,0);
          lVar2 = DAT_091f5ed0;
        }
        System_Text_StringBuilder__Append(plVar1,lVar2,0);
        uVar6 = *(uint *)(param_1 + 0x18);
        uVar8 = uVar8 + 1;
        uVar5 = DAT_091f86e8;
      } while ((int)uVar8 < (int)uVar6);
    }
    if ((param_2 >> 1 & 1) == 0) {
      if (plVar1 != (long *)0x0) {
LAB_074e1030:
                    /* WARNING: Could not recover jumptable at 0x074e1054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
        return;
      }
    }
    else if (plVar1 != (long *)0x0) {
      System_Text_StringBuilder__Append(plVar1,uVar5,0);
      System_Text_StringBuilder__Append(plVar1,DAT_091f9088,0);
      goto LAB_074e1030;
    }
  }
LAB_074e1058:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

