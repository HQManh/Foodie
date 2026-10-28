// rea decompile_all
// name: FUN_03fb4f8c
// address: 0x3fb4f8c
// body: available
// range: 0x3fb4f8c-0x3fb50f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb4f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  undefined1 uStack_21;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    FUN_03f5d894(&local_78,&DAT_09535308);
    if (*(long *)(param_1 + 0x30) == 0) {
      pvVar5 = operator_new(0x70);
      FUN_03fb9c84(pvVar5,0,local_90,&uStack_21);
      *(void **)(param_1 + 0x30) = pvVar5;
      if (*(int *)(param_1 + 0x18) != 0) {
        uVar7 = 0;
        do {
          uVar6 = thunk_FUN_03fab57c(param_1,uVar7);
          FUN_03fb5124(param_1,uVar6);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 0x18));
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        uVar7 = 0;
        do {
          uVar6 = thunk_FUN_03fab634(param_1,uVar7);
          FUN_03fb5124(param_1,uVar6);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 0x1c));
      }
    }
    FUN_03f5d920(&local_78);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  local_90[0] = 0;
  local_88 = param_2;
  uStack_80 = param_3;
  FUN_03fb9ec4(&local_78,lVar4,local_90);
  lVar3 = local_58;
  lVar2 = local_60;
  lVar1 = local_68;
  lVar4 = local_70;
  local_78 = *(long *)(param_1 + 0x30);
  local_70 = *(long *)(local_78 + 0x48);
  local_68 = *(long *)(local_78 + 0x50);
  local_38 = 0;
  local_58 = 0;
  local_60 = local_68;
  lStack_50 = local_70;
  local_48 = local_68;
  lStack_40 = local_68;
  FUN_03fb9bcc(&local_78);
  if ((((lVar4 == local_70) && (lVar1 == local_68)) && (lVar2 == local_60)) &&
     ((lVar2 == lVar1 || (lVar3 == local_58)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_03fc384c(*(undefined8 *)(lVar3 + 0x18));
  }
  return uVar6;
}

