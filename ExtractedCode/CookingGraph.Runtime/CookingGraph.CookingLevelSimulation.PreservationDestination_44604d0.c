// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PreservationDestination
// address: 0x44604d0
// body: available
// range: 0x44604d0-0x44606c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44606bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44606c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__PreservationDestination
               (undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_0951805a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c800);
    FUN_03f5c2a4(&DAT_091b6b80);
    DAT_0951805a = 1;
  }
  lVar4 = *(long *)(param_2 + 0x78);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x50), lVar5 != 0)) {
    if (*(uint *)(lVar5 + 0x18) <= param_3) {
LAB_044606c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)param_3 * 8 + 0x20);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) goto LAB_044606c0;
          lVar6 = *(long *)(lVar4 + 0x20);
          if (lVar6 == 0) goto LAB_044606bc;
          uVar1 = *(uint *)(lVar5 + uVar8 * 4 + 0x20);
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_044606c0;
          lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_044606bc;
          iVar7 = *(int *)(lVar6 + 0x18);
          while( true ) {
            lVar6 = *(long *)(lVar4 + 0x20);
            if (lVar6 == 0) goto LAB_044606bc;
            if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_044606c0;
            lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_044606bc;
            if (*(int *)(lVar6 + 0x1c) + *(int *)(*(long *)(lVar6 + 0x10) + 0x18) <= iVar7) break;
            CookingGraph_CookingLevelSimulation__ToolAddress(&local_70,uVar1,iVar7);
            uStack_88 = uStack_68;
            local_90 = local_70;
            local_80 = local_60;
            uStack_a8 = uStack_68;
            local_b0 = local_70;
            local_a0 = local_60;
            uVar3 = CookingGraph_CookingLevelSimulation__Occupied(param_2,&local_b0);
            if ((uVar3 & 1) == 0) {
              if (param_4 == 0) {
LAB_04460678:
                uVar2 = DAT_091b6b80;
                uStack_68 = uStack_88;
                local_70 = local_90;
                local_60 = local_80;
                param_1[1] = 0;
                *param_1 = 0;
                param_1[3] = 0;
                param_1[2] = 0;
                FUN_05c2b3b8(param_1,&local_70,uVar2);
                return;
              }
              uStack_68 = uStack_88;
              local_70 = local_90;
              local_60 = local_80;
              uVar3 = FUN_06e8248c(param_4,&local_70,DAT_0919c800);
              if ((uVar3 & 1) == 0) goto LAB_04460678;
            }
            lVar4 = *(long *)(param_2 + 0x78);
            iVar7 = iVar7 + 1;
            if (lVar4 == 0) goto LAB_044606bc;
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
  }
LAB_044606bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

