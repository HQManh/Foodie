// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$TryCompleteClaimedDish
// address: 0x449e09c
// body: available
// range: 0x449e09c-0x449e53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449e52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449e538 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__TryCompleteClaimedDish
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_48;
  
  if ((DAT_095181c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c868);
    FUN_03f5c2a4(&DAT_091c9258);
    FUN_03f5c2a4(&DAT_091caf28);
    FUN_03f5c2a4(&DAT_091cb5f8);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_091b2450);
    FUN_03f5c2a4(&DAT_091b2408);
    FUN_03f5c2a4(&DAT_0917e140);
    FUN_03f5c2a4(&DAT_091e6c78);
    FUN_03f5c2a4(&DAT_091e6d28);
    FUN_03f5c2a4(&DAT_091e6d30);
    FUN_03f5c2a4(&DAT_0918ef60);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181c2 = 1;
  }
  local_48 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918ef60);
  System_Object___ctor(lVar2,0);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  CookingGraph_Execution_CookingEndpoint___ctor(&local_88,4,param_2,param_3,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = uStack_80;
    *(undefined8 *)(lVar2 + 0x10) = local_88;
    *(undefined8 *)(lVar2 + 0x20) = local_78;
    thunk_FUN_03f5d7b8(lVar2 + 0x18,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      uStack_98 = *(undefined8 *)(lVar2 + 0x18);
      local_a0 = *(undefined8 *)(lVar2 + 0x10);
      local_90 = *(undefined8 *)(lVar2 + 0x20);
      local_70 = local_a0;
      uStack_68 = uStack_98;
      local_60 = local_90;
      uVar3 = FUN_06e88030(*(long *)(param_1 + 0x18),&local_70,&local_48,DAT_0919c868);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (local_48 != 0) {
        uVar9 = *(undefined8 *)(local_48 + 0x18);
        if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
        lVar10 = puVar6[10];
        if (lVar10 == 0) {
          if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar6 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
          }
          uVar12 = *puVar6;
          lVar10 = thunk_FUN_03f9944c(DAT_09178468);
          FUN_05311eac(lVar10,uVar12,DAT_091e6c78,0);
          plVar4 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x50);
          *plVar4 = lVar10;
          thunk_FUN_03f5d7b8(plVar4,lVar10);
        }
        uVar3 = FUN_04ab20f8(uVar9,lVar10,DAT_091c9258);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        if (local_48 != 0) {
          uVar3 = 0;
          lVar10 = local_48;
          do {
            if (*(long *)(lVar10 + 0x10) == 0) break;
            if ((long)*(int *)(*(long *)(lVar10 + 0x10) + 0x18) <= (long)uVar3) {
              uVar9 = *(undefined8 *)(param_1 + 0x38);
              lVar10 = *(long *)(lVar2 + 0x28);
              if (lVar10 == 0) {
                lVar10 = thunk_FUN_03f9944c(DAT_09179320);
                FUN_05322d94(lVar10,lVar2,DAT_091e6d30,0);
                *(long *)(lVar2 + 0x28) = lVar10;
                thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28),lVar10);
              }
              uVar9 = FUN_04b0cafc(uVar9,lVar10,DAT_091cb5f8);
              lVar10 = FUN_04b049e4(uVar9,DAT_091caf28);
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if ((int)uVar1 < 1) goto LAB_0449e470;
                lVar7 = 0;
                goto LAB_0449e41c;
              }
              break;
            }
            lVar7 = *(long *)(lVar10 + 0x18);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0449e538;
            if (*(char *)(lVar7 + uVar3 + 0x20) == '\0') {
              local_70 = 0;
              uStack_68 = 0;
              local_60 = 0;
              CookingGraph_Execution_CookingEndpoint___ctor
                        (&local_70,*(undefined4 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                         *(undefined4 *)(lVar2 + 0x20),uVar3 & 0xffffffff);
              uStack_b8 = uStack_68;
              local_c0 = local_70;
              local_b0 = local_60;
              uVar5 = CookingGraph_Execution_CookingExecution__Claimed(param_1,&local_c0);
              lVar10 = local_48;
              if ((uVar5 & 1) == 0) {
                return 0;
              }
            }
            uVar3 = uVar3 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  goto LAB_0449e52c;
  while( true ) {
    FUN_053e19f4(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar11 + 0x18),DAT_091a8330);
    uVar1 = *(uint *)(lVar10 + 0x18);
    lVar7 = lVar7 + 1;
    if ((int)uVar1 <= (int)lVar7) break;
LAB_0449e41c:
    if (uVar1 <= (uint)lVar7) {
LAB_0449e538:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar11 = *(long *)(lVar10 + 0x20 + lVar7 * 8);
    CookingGraph_Execution_CookingExecution__RemoveSource(param_1,lVar11);
    if (((*(long *)(param_1 + 0x38) == 0) ||
        (FUN_057e2274(*(long *)(param_1 + 0x38),lVar11,DAT_091b2408), lVar11 == 0)) ||
       (*(long *)(param_1 + 0x28) == 0)) goto LAB_0449e52c;
  }
LAB_0449e470:
  lVar10 = *(long *)(param_1 + 0x48);
  uVar9 = thunk_FUN_03f9944c(DAT_0917e140);
  FUN_05d78cfc(uVar9,lVar2,DAT_091e6d28,0);
  if (lVar10 != 0) {
    FUN_057e23b0(lVar10,uVar9,DAT_091b2450);
    CookingGraph_Execution_CookingExecution__PruneWaves(param_1);
    if (local_48 != 0) {
      iVar8 = 0;
      do {
        if (*(long *)(local_48 + 0x10) == 0) break;
        if (*(int *)(*(long *)(local_48 + 0x10) + 0x18) <= iVar8) {
          return 1;
        }
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        CookingGraph_Execution_CookingEndpoint___ctor
                  (&local_70,*(undefined4 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                   *(undefined4 *)(lVar2 + 0x20),iVar8);
        uStack_d8 = uStack_68;
        local_e0 = local_70;
        local_d0 = local_60;
        CookingGraph_Execution_CookingExecution__Fill(param_1,&local_e0);
        iVar8 = iVar8 + 1;
      } while (local_48 != 0);
    }
  }
LAB_0449e52c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

