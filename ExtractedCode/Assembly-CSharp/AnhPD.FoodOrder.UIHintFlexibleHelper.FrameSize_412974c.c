// rea decompile_all
// name: AnhPD.FoodOrder.UIHintFlexibleHelper$$FrameSize
// address: 0x412974c
// body: available
// range: 0x412974c-0x412995f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintFlexibleHelper__FrameSize
               (long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  ulong uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  double __x;
  float fVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  double local_38;
  
  iVar5 = *(int *)(param_1 + 0x48);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  *param_5 = iVar5;
  *param_4 = iVar5;
  uVar1 = AnhPD_FoodOrder_UIHintFlexibleHelper__TryGetFrameBounds(param_2,param_3,&local_50);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (uStack_48._4_4_ + uStack_48._4_4_ <= 0.0) {
    return;
  }
  if ((float)local_40 + (float)local_40 <= 0.0) {
    return;
  }
  fVar2 = (uStack_48._4_4_ + uStack_48._4_4_) / ((float)local_40 + (float)local_40);
  fVar4 = 8.0;
  if (fVar2 <= 8.0) {
    fVar4 = fVar2;
  }
  fVar6 = 0.125;
  if (0.125 <= fVar2) {
    fVar6 = fVar4;
  }
  iVar5 = *(int *)(param_1 + 0x48);
  if (1.0 <= fVar6) {
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    fVar6 = (float)iVar5 / fVar6;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    __x = (double)fVar6;
    dVar3 = modf(__x,&local_38);
    param_4 = param_5;
    if (0.0 <= fVar6) {
      if (dVar3 != 0.5) goto LAB_04129928;
      dVar3 = 1.0;
    }
    else {
      if (dVar3 != -0.5) goto LAB_04129910;
      dVar3 = -1.0;
    }
    dVar3 = local_38 + dVar3;
  }
  else {
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    fVar6 = fVar6 * (float)iVar5;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    __x = (double)fVar6;
    dVar3 = modf(__x,&local_38);
    if (0.0 <= fVar6) {
      if (dVar3 != 0.5) {
LAB_04129928:
        param_5 = param_4;
        local_38 = (double)(long)(__x + 0.5);
        goto LAB_0412992c;
      }
      dVar3 = 1.0;
    }
    else {
      if (dVar3 != -0.5) {
LAB_04129910:
        param_5 = param_4;
        local_38 = (double)(long)(__x + -0.5);
        goto LAB_0412992c;
      }
      dVar3 = -1.0;
    }
    dVar3 = local_38 + dVar3;
    param_5 = param_4;
  }
  if (((long)local_38 & 1U) != 0) {
    local_38 = dVar3;
  }
LAB_0412992c:
  iVar5 = (int)local_38;
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  if (local_38 == INFINITY) {
    iVar5 = 1;
  }
  *param_5 = iVar5;
  return;
}

