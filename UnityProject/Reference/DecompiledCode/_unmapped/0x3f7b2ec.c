// rea decompile_all
// name: FUN_03f7b2ec
// address: 0x3f7b2ec
// body: available
// range: 0x3f7b2ec-0x3f7b6c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03f7b2ec(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  undefined4 local_90;
  undefined4 uStack_8c;
  long *local_88;
  char local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *plStack_68;
  long local_60;
  char local_58;
  long *local_48;
  undefined1 auStack_38 [8];
  
  FUN_03f5d894(auStack_38,&DAT_09535730);
  local_70 = 0;
  plStack_68 = param_1;
  uVar3 = FUN_03f7b1fc(&DAT_09534730,&local_70,&local_48);
  if ((uVar3 & 1) != 0) goto LAB_03f7b6a4;
  local_70 = 0;
  plStack_68 = param_1;
  uVar3 = FUN_03f7b1fc(&DAT_095347a0,&local_70,&local_48);
  if ((uVar3 & 1) != 0) goto LAB_03f7b6a4;
  lVar10 = *param_1;
  plVar9 = param_1 + 1;
  lVar8 = *(long *)(lVar10 + 0x20);
  if (*plVar9 != 0) {
    uVar4 = FUN_03f771b0(lVar8);
    lVar8 = FUN_03fb49f4(uVar4,1);
    if (lVar8 == 0) {
      local_48 = (long *)0x0;
      goto LAB_03f7b6a4;
    }
  }
  lVar5 = FUN_03f76e64(*(undefined8 *)(lVar10 + 0x30),*(undefined1 *)(lVar10 + 0x52),plVar9,1);
  FUN_03fc2f50(&local_70,lVar10,plVar9);
  if (local_58 == '\0') {
LAB_03f7b408:
    bVar11 = 0;
    uVar4 = 0x58;
  }
  else {
    uVar3 = FUN_03fb8530(*(undefined8 *)(lVar10 + 0x28));
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)*(byte *)(lVar10 + 0x52);
      if (*(byte *)(lVar10 + 0x52) != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(*(long *)(lVar5 + uVar12 * 8) + 8) < 0) {
            uVar3 = FUN_03fb8530(*(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 8));
            if ((uVar3 & 1) != 0) goto LAB_03f7b3c4;
            uVar3 = (ulong)*(byte *)(lVar10 + 0x52);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar3);
      }
      goto LAB_03f7b408;
    }
LAB_03f7b3c4:
    bVar11 = 8;
    uVar4 = 0x70;
  }
  local_78 = (long *)FUN_03fa7f34(1,uVar4);
  local_90 = 0;
  local_88 = param_1;
  FUN_03f7b70c(&DAT_095347a0,&local_90,&local_78);
  local_78[4] = lVar8;
  *(undefined2 *)((long)local_78 + 0x4c) = *(undefined2 *)(lVar10 + 0x4c);
  *(undefined4 *)((long)local_78 + 0x4e) = *(undefined4 *)(lVar10 + 0x4e);
  lVar7 = *(long *)(lVar10 + 0x18);
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xfc | 2;
  local_78[3] = lVar7;
  *(undefined4 *)(local_78 + 9) = *(undefined4 *)(lVar10 + 0x48);
  lVar7 = FUN_03f76ed4(*(undefined8 *)(lVar10 + 0x28),plVar9,1);
  local_78[5] = lVar7;
  uVar2 = *(undefined1 *)(lVar10 + 0x52);
  local_78[6] = lVar5;
  *(undefined1 *)((long)local_78 + 0x52) = uVar2;
  plVar6 = (long *)FUN_03fa7f34(1,0x18);
  local_78[8] = (long)plVar6;
  lVar7 = *param_1;
  lVar5 = param_1[2];
  plVar6[1] = param_1[1];
  *plVar6 = lVar7;
  plVar6[2] = lVar5;
  if (param_1[2] == 0) {
    if ((*(byte *)(lVar10 + 0x53) & 1) != 0) {
      *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) | 1;
    }
    if (*(long *)(lVar8 + 0x60) == 0) {
      local_78[8] = *(long *)(lVar10 + 0x40);
    }
    lVar10 = *(long *)(lVar10 + 0x38);
LAB_03f7b53c:
    local_78[7] = lVar10;
  }
  else if ((DAT_095356c8 == 0) && (uVar3 = FUN_03f777b0(), (uVar3 & 1) == 0)) {
    lVar10 = FUN_03f77504(**(undefined8 **)(*param_1 + 0x20),*(undefined4 *)(*param_1 + 0x48),plVar9
                          ,auStack_38);
    goto LAB_03f7b53c;
  }
  local_78[1] = (long)plStack_68;
  *local_78 = CONCAT44(uStack_6c,local_70);
  if (CONCAT44(uStack_6c,local_70) == 0) {
    lVar10 = FUN_03fbd410();
    local_78[2] = lVar10;
    FUN_03fc07b4(&local_90,local_78);
    *local_78 = CONCAT44(uStack_8c,local_90);
    local_78[1] = (long)local_88;
  }
  else {
    local_78[2] = local_60;
  }
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xf7 | bVar11;
  FUN_0404c020(1,&DAT_09534458);
  uVar3 = FUN_03faded4(local_78);
  if ((uVar3 & 1) != 0) {
    lVar10 = *local_78;
    lVar5 = local_78[1];
    local_78[0xd] = local_78[2];
    local_78[0xb] = lVar5;
    local_78[0xc] = lVar10;
    puVar1 = &LAB_03f7b7b8;
    if (lVar10 != lVar5) {
      puVar1 = &LAB_03f7b798;
    }
    local_78[2] = (long)puVar1;
    FUN_03fc07b4(&local_90);
    if (local_80 == '\0') {
      *local_78 = (long)FUN_03f7b7c0;
      local_78[1] = (long)FUN_03f7b7c0;
      if (lVar10 != lVar5) {
        *local_78 = (long)FUN_03f7b7d8;
      }
    }
    else {
      *local_78 = CONCAT44(uStack_8c,local_90);
      local_78[1] = (long)local_88;
    }
  }
  uVar3 = FUN_03fadb08(local_78);
  if ((uVar3 & 1) != 0) {
    FUN_03fbffcc(lVar8,auStack_38);
  }
  local_90 = 0;
  local_88 = (long *)local_78[8];
  FUN_03f7b70c(&DAT_09534730,&local_90,&local_78);
  local_90 = 0;
  local_88 = param_1;
  FUN_03f7b7f0(&DAT_095347a0,&local_90);
  local_48 = local_78;
LAB_03f7b6a4:
  FUN_03f5d920(auStack_38);
  return local_48;
}

