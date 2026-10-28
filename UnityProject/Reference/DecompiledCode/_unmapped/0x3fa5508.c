// rea decompile_all
// name: DllGetActivationFactory
// address: 0x3fa5508
// body: available
// range: 0x3fa5508-0x3fa56f3 inclusive
// range: 0x3fa5700-0x3fa5713 inclusive
// range: 0x3fa5738-0x3fa574f inclusive
// range: 0x3fa5754-0x3fa5763 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa5760 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int DllGetActivationFactory(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90 [2];
  byte local_88 [8];
  void *pvStack_80;
  void *local_78;
  undefined4 local_70;
  undefined8 local_68;
  uint local_60;
  byte local_58;
  void *pvStack_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  long local_28;
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == (undefined8 *)0x0) {
    return -0x7ff8ffa9;
  }
  local_28 = param_1;
  FUN_03f5d894(auStack_30,0x95350a0);
  if ((DAT_095350f0 & 1) == 0) {
    uVar3 = FUN_03fbb7cc("IL2CPP Root Domain");
    if ((uVar3 & 1) == 0) {
      iVar2 = -0x7feceafa;
      goto LAB_03fa56cc;
    }
    DAT_095350f0 = 1;
  }
  puVar4 = (undefined8 *)FUN_03fa9390(&DAT_09535088,&local_28);
  if (puVar4 == &DAT_09535090) {
    FUN_03f896e8(&local_68,local_28,&local_34);
    local_90[0] = local_60;
    if ((local_58 & 1) == 0) {
      local_88[0] = local_58;
      pvStack_80 = pvStack_50;
      local_78 = local_48;
    }
    else {
      FUN_03f5d0a4(local_88,local_48,pvStack_50);
    }
    local_70 = local_40;
    iVar2 = FUN_03f917a8(local_90);
    if (iVar2 != 0) {
      uVar7 = FUN_03fa5d60(local_90);
      if ((local_90[0] & 1) != 0) {
        operator_delete(pvStack_80);
      }
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      FUN_03f5d920(auStack_30);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar7);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_03f926f0(local_90,local_68,local_34);
    pvVar1 = (void *)((ulong)local_90 | 1);
    if ((local_90[0] & 1) != 0) {
      pvVar1 = pvStack_80;
    }
    pcVar5 = (code *)FUN_03fc2bf0(pvVar1);
    if (pcVar5 == (code *)0x0) {
      iVar2 = -0x7ffbfeac;
    }
    else {
      iVar2 = FUN_03f896dc(local_28,&local_98);
      if (-1 < iVar2) {
        uStack_a8 = (*pcVar5)();
        local_b0 = local_98;
        local_a0 = local_98;
        lVar6 = FUN_03fa95cc(&DAT_09535088,&local_b0,&local_b0);
        plVar8 = *(long **)(lVar6 + 0x28);
        (**(code **)(*plVar8 + 8))(plVar8);
        iVar2 = 0;
        *param_2 = plVar8;
      }
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(pvStack_80);
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
    plVar8 = (long *)puVar4[5];
    (**(code **)(*plVar8 + 8))(plVar8);
    iVar2 = 0;
    *param_2 = plVar8;
  }
LAB_03fa56cc:
  FUN_03f5d920(auStack_30);
  return iVar2;
}

