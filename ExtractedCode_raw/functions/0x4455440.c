// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AdmitCustomers
// address: 0x4455440
// body: available
// range: 0x4455440-0x44558b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445588c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44558b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__AdmitCustomers(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  double dVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_0951801f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9550);
    FUN_03f5c2a4(&DAT_091c96b8);
    FUN_03f5c2a4(&DAT_091cab80);
    FUN_03f5c2a4(&DAT_091caf48);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091793a0);
    FUN_03f5c2a4(&DAT_091b24e0);
    FUN_03f5c2a4(&DAT_091b24f8);
    FUN_03f5c2a4(&DAT_091b2508);
    FUN_03f5c2a4(&DAT_091b2510);
    FUN_03f5c2a4(&DAT_091e74e0);
    FUN_03f5c2a4(&DAT_091e74e8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0951801f = 1;
  }
  while ((*(long *)(param_1 + 0x98) != 0 && (*(long *)(param_1 + 0xa8) != 0))) {
    if (*(int *)(param_1 + 0x110) <=
        *(int *)(*(long *)(param_1 + 0xa8) + 0x18) + *(int *)(*(long *)(param_1 + 0x98) + 0x18)) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0xa0);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) < 1) {
      return;
    }
    if (*(int *)(param_1 + 0x188) != 0) {
      return;
    }
    lVar2 = FUN_057e0998(lVar2,0,DAT_091b2510);
    uVar3 = FUN_04ad43f0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                         DAT_091c96b8);
    lVar4 = FUN_04b049e4(uVar3,DAT_091caf48);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar9 = puVar8[0x4a];
    if (lVar9 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar3 = *puVar8;
      lVar9 = thunk_FUN_03f9944c(DAT_09179390);
      FUN_05322d94(lVar9,uVar3,DAT_091e74e0,0);
      lVar6 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar6 + 0x250) = lVar9;
      thunk_FUN_03f5d7b8(lVar6 + 0x250,lVar9);
    }
    uVar5 = FUN_04ab6f28(lVar4,lVar9,DAT_091c9550);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (lVar2 == 0) break;
    if (*(char *)(lVar2 + 0x19) != '\0') {
      if (lVar4 == 0) break;
      if (*(long *)(lVar4 + 0x18) != 0) {
        return;
      }
    }
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar9 = puVar8[0x4b];
    if (lVar9 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar3 = *puVar8;
      lVar9 = thunk_FUN_03f9944c(DAT_091793a0);
      FUN_05323790(lVar9,uVar3,DAT_091e74e8,0);
      lVar6 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar6 + 600) = lVar9;
      thunk_FUN_03f5d7b8(lVar6 + 600,lVar9);
    }
    dVar10 = (double)FUN_04b02604(lVar4,lVar9,DAT_091cab80);
    if ((*(long *)(param_1 + 0x180) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar4 == 0)) break;
    if ((double)*(float *)(lVar4 + 0x18) < dVar10 + *(double *)(lVar2 + 0x30)) {
      return;
    }
    if (*(long *)(param_1 + 0xa0) == 0) break;
    FUN_057e251c(*(long *)(param_1 + 0xa0),0,DAT_091b24f8);
    lVar4 = DAT_091b24e0;
    lVar9 = *(long *)(param_1 + 0x98);
    if (lVar9 == 0) break;
    lVar6 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = lVar2;
      thunk_FUN_03f5d7b8(plVar7,lVar2);
    }
    else {
      FUN_057e0c68(lVar9,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    if (*(char *)(lVar2 + 0x18) == '\0') {
      lVar4 = *(long *)(lVar2 + 0x50);
      if (lVar4 == 0) break;
      uVar5 = 0;
      while ((int)(uint)uVar5 < *(int *)(lVar4 + 0x18)) {
        lVar9 = *(long *)(param_1 + 0x178);
        uVar3 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(lVar2,0);
        lVar4 = *(long *)(lVar2 + 0x50);
        if (lVar4 == 0) goto LAB_0445588c;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar9 == 0)) goto LAB_0445588c;
        CookingGraph_Execution_CookingExecution__RegisterDish
                  (lVar9,uVar3,uVar5 & 0xffffffff,*(undefined8 *)(lVar4 + 0x20),0);
        lVar4 = *(long *)(lVar2 + 0x50);
        uVar5 = uVar5 + 1;
        if (lVar4 == 0) goto LAB_0445588c;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation__StaffAddress(&local_78,lVar2);
      if (lVar4 == 0) break;
      uStack_88 = uStack_70;
      local_90 = local_78;
      local_80 = local_68;
      CookingGraph_Execution_CookingExecution__RegisterInventory(lVar4,&local_90,0x7fffffff,0,0);
    }
    CookingGraph_CookingLevelSimulation__Emit
              (param_1,4,*(undefined4 *)(lVar2 + 0x10),DAT_091f5700,0);
    if (*(char *)(lVar2 + 0x19) != '\0') {
      return;
    }
  }
LAB_0445588c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

