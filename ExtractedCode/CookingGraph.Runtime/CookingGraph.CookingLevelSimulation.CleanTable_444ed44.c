// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CleanTable
// address: 0x444ed44
// body: available
// range: 0x444ed44-0x444f0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444f09c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444f0a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__CleanTable(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_09518011 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091cadc0);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091adcd8);
    FUN_03f5c2a4(&DAT_091e75c0);
    FUN_03f5c2a4(&DAT_091e75c8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_0920d868);
    DAT_09518011 = 1;
  }
  lVar2 = CookingGraph_CookingLevelSimulation__CleanTableCells(param_1,param_2 & 1);
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar11 = 0;
      do {
        if (uVar4 <= uVar11) {
LAB_0444f0a0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(param_1 + 0x178);
        uVar1 = *(undefined4 *)(lVar2 + uVar11 * 4 + 0x20);
        CookingGraph_CookingLevelSimulation__GridAddress(&local_78,uVar1);
        if (lVar9 == 0) goto LAB_0444f09c;
        uStack_88 = uStack_70;
        local_90 = local_78;
        local_80 = local_68;
        uVar3 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_90,0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar9 = puVar8[0x31];
        if (lVar9 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar9 = thunk_FUN_03f9944c(DAT_09178768);
          FUN_053136a4(lVar9,uVar10,DAT_091e75c0,0);
          lVar5 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar5 + 0x188) = lVar9;
          thunk_FUN_03f5d7b8(lVar5 + 0x188,lVar9);
        }
        uVar3 = FUN_04b0beec(uVar3,lVar9,DAT_091cb468);
        lVar9 = FUN_04b0451c(uVar3,DAT_091cadc0);
        if (lVar9 == 0) goto LAB_0444f09c;
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          puVar8 = (undefined8 *)(lVar9 + 0x20);
          do {
            if (uVar6 <= uVar4) goto LAB_0444f0a0;
            uVar3 = *puVar8;
            lVar5 = *(long *)(param_1 + 0x178);
            CookingGraph_CookingLevelSimulation__GridAddress(&local_78,uVar1);
            if (lVar5 == 0) goto LAB_0444f09c;
            uStack_a8 = uStack_70;
            local_b0 = local_78;
            local_a0 = local_68;
            CookingGraph_Execution_CookingExecution__Consume(lVar5,&local_b0,uVar3,0);
            uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar4 = uVar4 + 1;
            puVar8 = puVar8 + 3;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        if (*(long *)(param_1 + 0xe8) == 0) goto LAB_0444f09c;
        FUN_05798784(*(long *)(param_1 + 0xe8),uVar1,DAT_091adcd8);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = DAT_0920d868;
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar5 = puVar8[0x32];
        if (lVar5 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar5 = thunk_FUN_03f9944c(DAT_09178778);
          FUN_05313f40(lVar5,uVar10,DAT_091e75c8,0);
          lVar7 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar7 + 400) = lVar5;
          thunk_FUN_03f5d7b8(lVar7 + 400,lVar5);
        }
        uVar10 = FUN_04af142c(lVar9,lVar5,DAT_091ca3b8);
        CookingGraph_CookingLevelSimulation__Emit(param_1,8,uVar1,uVar3,uVar10);
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return (int)uVar4 != 0;
  }
LAB_0444f09c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

