// rea decompile_all
// name: System.Threading.Tasks.Task$$WhenAny
// address: 0x7634f14
// body: available
// range: 0x7634f14-0x76350af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7634fe8 to 0x76350b0 System.Threading.Tasks.TaskFactory$$CommonCWAnyLogic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7634fec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7634ff8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7635054 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7635058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__WhenAny(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  if ((DAT_0952220d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180688);
    DAT_0952220d = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09223c38);
    System_ArgumentNullException___ctor(uVar3,uVar5,0);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x18);
    if (uVar7 != 0) {
      plVar1 = (long *)FUN_03f5c394(DAT_09180688,uVar7 & 0xffffffff);
      if (0 < (int)(uint)uVar7) {
        uVar9 = 0;
        lVar10 = 0x20;
        do {
          if (*(uint *)(param_1 + 0x18) <= uVar9) {
LAB_07634fec:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(param_1 + lVar10);
          if (lVar8 == 0) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar3 = thunk_FUN_03f9944c();
            puVar4 = &DAT_092100c0;
            goto LAB_07635018;
          }
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar2 == 0) {
            uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,0);
          }
          if (*(uint *)(plVar1 + 3) <= uVar9) goto LAB_07634fec;
          *(long *)((long)plVar1 + lVar10) = lVar8;
          thunk_FUN_03f5d7b8((long)plVar1 + lVar10,lVar8);
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while ((uint)uVar7 != uVar9);
      }
      System_Threading_Tasks_TaskFactory__CommonCWAnyLogic(plVar1);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_092100b8;
LAB_07635018:
    uVar5 = thunk_FUN_03fc39d4(puVar4);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09223c38);
    System_ArgumentException___ctor(uVar3,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091daf10);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

