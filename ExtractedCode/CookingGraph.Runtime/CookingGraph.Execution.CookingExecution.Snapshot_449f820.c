// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Snapshot
// address: 0x449f820
// body: available
// range: 0x449f820-0x449fbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449fb5c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449fbb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449fbb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449fbc0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__Snapshot(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_095181d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fd68);
    FUN_03f5c2a4(&DAT_09182ca0);
    FUN_03f5c2a4(&DAT_091b2438);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0917fa80);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_0917e140);
    FUN_03f5c2a4(&DAT_091e6d80);
    FUN_03f5c2a4(&DAT_0918ef98);
    DAT_095181d1 = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    lVar3 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x18));
    if ((*(long *)(param_3 + 0x10) != 0) &&
       (lVar4 = FUN_03f5c394(DAT_0917fa80,*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x18)),
       lVar3 != 0)) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar9 = 0;
        do {
          lVar5 = thunk_FUN_03f9944c(DAT_0918ef98);
          System_Object___ctor(lVar5,0);
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          CookingGraph_Execution_CookingEndpoint___ctor
                    (&local_a0,*(undefined4 *)param_2,param_2[1],*(undefined4 *)(param_2 + 2),
                     uVar9 & 0xffffffff);
          if (lVar5 == 0) goto LAB_0449fbb0;
          *(undefined8 *)(lVar5 + 0x18) = uStack_98;
          *(undefined8 *)(lVar5 + 0x10) = local_a0;
          *(undefined8 *)(lVar5 + 0x20) = local_90;
          thunk_FUN_03f5d7b8(lVar5 + 0x18,0);
          uStack_b8 = *(undefined8 *)(lVar5 + 0x18);
          local_c0 = *(undefined8 *)(lVar5 + 0x10);
          local_b0 = *(undefined8 *)(lVar5 + 0x20);
          bVar2 = CookingGraph_Execution_CookingExecution__Claimed(param_1,&local_c0);
          if (*(uint *)(lVar3 + 0x18) <= uVar9) {
LAB_0449fbb4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(byte *)(lVar3 + 0x20 + uVar9) = bVar2 & 1;
          lVar10 = *(long *)(param_1 + 0x48);
          uVar6 = thunk_FUN_03f9944c(DAT_0917e140);
          FUN_05d78cfc(uVar6,lVar5,DAT_091e6d80,0);
          if (lVar10 == 0) goto LAB_0449fbb0;
          lVar5 = FUN_057e1328(lVar10,uVar6,DAT_091b2438);
          if (lVar5 != 0) {
            dVar11 = *(double *)(lVar5 + 0x28);
            dVar12 = *(double *)(lVar5 + 0x30);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187e80);
            }
            uVar6 = System_Math__Min(0x3ff0000000000000,1.0 - dVar11 / dVar12,0);
            System_Math__Max(0,uVar6,0);
            local_a0 = 0;
            uStack_98 = 0;
            FUN_05c2dd28(&local_a0,DAT_091b6d48);
            if (lVar4 == 0) goto LAB_0449fbb0;
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0449fbb4;
            puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar9 * 0x10);
            puVar1[1] = uStack_98;
            *puVar1 = local_a0;
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)(lVar3 + 0x18));
      }
      uStack_98 = param_2[1];
      local_a0 = *param_2;
      local_90 = param_2[2];
      if (*(long *)(param_3 + 0x10) != 0) {
        lVar5 = System_Array__Clone(*(long *)(param_3 + 0x10),0);
        if (*(long *)(param_3 + 0x18) != 0) {
          lVar10 = System_Array__Clone(*(long *)(param_3 + 0x18),0);
          uVar7 = thunk_FUN_03f9944c(DAT_09182ca0);
          uVar6 = DAT_0917fd68;
          uStack_d8 = uStack_98;
          local_e0 = local_a0;
          local_d0 = local_90;
          if (lVar5 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = thunk_FUN_03f99350(lVar5,DAT_0917fd68);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar5,uVar6);
            }
          }
          uVar6 = DAT_0917fc40;
          if (lVar10 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = thunk_FUN_03f99350(lVar10,DAT_0917fc40);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar10,uVar6);
            }
          }
          CookingGraph_Execution_CookingAssemblySnapshot___ctor
                    (uVar7,&local_e0,lVar8,lVar5,lVar3,lVar4);
          return uVar7;
        }
      }
    }
  }
LAB_0449fbb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

