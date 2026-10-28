// rea decompile_all
// name: System.Delegate$$InitializeDelegateData
// address: 0x760104c
// body: available
// range: 0x760104c-0x760113f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7601138 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x760113c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Delegate__InitializeDelegateData(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09521fd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091839b8);
    FUN_03f5c2a4(&DAT_09205c90);
    DAT_09521fd6 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091839b8);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0760113c;
  uVar4 = System_Reflection_MethodBase__get_IsStatic(*(long *)(param_1 + 0x58),0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar5 = FUN_03f6c2d0(param_1);
      if ((lVar5 == 0) ||
         (plVar6 = (long *)System_Type__GetMethod(lVar5,DAT_09205c90,0), plVar6 == (long *)0x0))
      goto LAB_0760113c;
      iVar1 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 == (long *)0x0) goto LAB_0760113c;
      iVar2 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
      if (iVar1 + 1 != iVar2) goto LAB_07601124;
    }
    if (lVar3 == 0) {
LAB_0760113c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar3 + 0x20) = 1;
  }
LAB_07601124:
  *(long *)(param_1 + 0x68) = lVar3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x68),lVar3);
  return;
}

