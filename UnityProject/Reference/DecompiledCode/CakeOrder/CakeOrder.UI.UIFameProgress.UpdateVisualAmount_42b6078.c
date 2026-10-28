// rea decompile_all
// name: CakeOrder.UI.UIFameProgress$$UpdateVisualAmount
// address: 0x42b6078
// body: available
// range: 0x42b6078-0x42b6333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b6330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIFameProgress__UpdateVisualAmount(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  int local_3c;
  double local_38;
  
  if ((DAT_095172d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f5e30);
    DAT_095172d2 = 1;
  }
  local_3c = 0;
  if ((*(long *)(param_2 + 200) == 0) || (*(int *)(*(long *)(param_2 + 200) + 0x14) < 1)) {
    plVar4 = *(long **)(param_2 + 0x60);
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar6 = (double)param_1;
    dVar5 = modf(dVar6,&local_38);
    if (0.0 <= param_1) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_042b61b4;
      }
      local_38 = (double)(long)(dVar6 + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_042b61b4:
      if (((long)local_38 & 1U) != 0) {
        local_38 = local_38 + dVar5;
      }
    }
    else {
      local_38 = (double)(long)(dVar6 + -0.5);
    }
    local_3c = -0x80000000;
    if (local_38 != INFINITY) {
      local_3c = (int)local_38;
    }
    uVar1 = System_Int32__ToString(&local_3c,0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
      plVar4 = *(long **)(param_2 + 0xa8);
      if (plVar4 == (long *)0x0) goto LAB_042b6330;
      param_1 = 1.0;
      pcVar3 = *(code **)(*plVar4 + 0x428);
      uVar1 = *(undefined8 *)(*plVar4 + 0x430);
      goto LAB_042b6318;
    }
    goto LAB_042b6330;
  }
  plVar4 = *(long **)(param_2 + 0x60);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar6 = (double)param_1;
  dVar5 = modf(dVar6,&local_38);
  if (0.0 <= param_1) {
    if (dVar5 == 0.5) {
      dVar5 = 1.0;
      goto LAB_042b61dc;
    }
    local_38 = (double)(long)(dVar6 + 0.5);
  }
  else if (dVar5 == -0.5) {
    dVar5 = -1.0;
LAB_042b61dc:
    if (((long)local_38 & 1U) != 0) {
      local_38 = local_38 + dVar5;
    }
  }
  else {
    local_38 = (double)(long)(dVar6 + -0.5);
  }
  local_3c = -0x80000000;
  if (local_38 != INFINITY) {
    local_3c = (int)local_38;
  }
  uVar1 = System_Int32__ToString(&local_3c,0);
  if (*(long *)(param_2 + 200) != 0) {
    uVar2 = System_Int32__ToString(*(long *)(param_2 + 200) + 0x14,0);
    uVar1 = System_String__Concat(uVar1,DAT_091f5e30,uVar2,0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
      if ((*(long *)(param_2 + 200) != 0) &&
         (plVar4 = *(long **)(param_2 + 0xa8), plVar4 != (long *)0x0)) {
        pcVar3 = *(code **)(*plVar4 + 0x428);
        uVar1 = *(undefined8 *)(*plVar4 + 0x430);
        param_1 = param_1 / (float)*(int *)(*(long *)(param_2 + 200) + 0x14);
LAB_042b6318:
        (*pcVar3)(param_1,plVar4,uVar1);
        return;
      }
    }
  }
LAB_042b6330:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

