// rea decompile_all
// name: FUN_03fa88a8
// address: 0x3fa88a8
// body: available
// range: 0x3fa88a8-0x3fa8ba7 inclusive
// range: 0x3fa8bb0-0x3fa8bb7 inclusive
// range: 0x3fa8bcc-0x3fa8bdf inclusive
// range: 0x3fa8bf4-0x3fa8c03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa8c00 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa88a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_120 [2];
  long *local_118;
  undefined8 uStack_110;
  long *local_108;
  long *local_100;
  void *pvStack_f8;
  void *local_f0;
  long local_e8;
  long *plStack_e0;
  void *local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  void *pvStack_a0;
  void *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  undefined1 auStack_38 [8];
  
  iVar2 = (**(code **)*param_1)(param_1,&DAT_023abcd8,&local_108);
  if (-1 < iVar2) {
    lVar3 = (**(code **)(*local_108 + 0x18))();
    (**(code **)(*local_108 + 0x10))(local_108);
    return lVar3;
  }
  uVar4 = (**(code **)*param_1)(param_1,&DAT_023abcb8,&local_108);
  plVar1 = local_108;
  if (-1 < (int)uVar4) {
    FUN_03f5d894(auStack_38,&DAT_09535138);
    local_108 = (long *)((ulong)local_108 & 0xffffffff00000000);
    local_100 = plVar1;
    FUN_03fa4e1c(auStack_88,&DAT_09535188,&local_108);
    local_c8 = 0;
    local_108 = (long *)&DAT_09535188;
    local_100 = DAT_095351c8;
    pvStack_f8 = DAT_095351d0;
    local_f0 = DAT_095351d0;
    local_e8 = 0;
    plStack_e0 = DAT_095351c8;
    local_d8 = DAT_095351d0;
    pvStack_d0 = DAT_095351d0;
    FUN_03f6054c(&local_108);
    if ((((local_80 != local_100) || (local_78 != pvStack_f8)) || (local_70 != local_f0)) ||
       ((local_70 != local_78 && (local_68 != local_e8)))) {
      lVar3 = FUN_03f5dff4(*(undefined8 *)(local_68 + 0x10));
      if (lVar3 != 0) {
        iVar2 = FUN_0404bfc0(1,lVar3 + 0xac);
        DataMemoryBarrier(2,3);
        if (1 < iVar2 + 1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          goto LAB_03fa8b54;
        }
      }
      memcpy(&local_108,auStack_88,0x48);
      FUN_03faa518(&DAT_09535188,&local_108);
    }
    iVar2 = (**(code **)*param_1)(param_1,&DAT_023abce8,&local_108);
    lVar5 = param_2;
    if (-1 < iVar2) {
      lVar5 = FUN_03faa3bc(local_108,param_2);
      (**(code **)(*local_108 + 0x10))();
    }
    lVar3 = FUN_03fa84f8(param_1,lVar5);
    if (lVar3 == 0) {
      if (((*(char *)(lVar5 + 0x2a) != '\x12') || ((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0)) ||
         ((*(ushort *)(lVar5 + 0x135) >> 4 & 1) != 0)) {
        lVar5 = param_2;
      }
      lVar3 = thunk_FUN_03f9944c(lVar5);
      *(long **)(lVar3 + 0x10) = plVar1;
      *(undefined4 *)(lVar3 + 0xac) = 1;
      FUN_03f5df14(&local_b8,lVar3,0);
      local_108 = (long *)CONCAT44(local_108._4_4_,local_b0);
      if ((local_a8 & 1) == 0) {
        local_100 = (long *)CONCAT71(uStack_a7,local_a8);
        pvStack_f8 = pvStack_a0;
        local_f0 = local_98;
      }
      else {
        FUN_03f5d0a4(&local_100,local_98,pvStack_a0);
      }
      local_e8 = CONCAT44(local_e8._4_4_,local_90);
      iVar2 = FUN_03f917a8(&local_108);
      if (iVar2 != 0) goto LAB_03fa8b9c;
      if (((ulong)local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      local_120[0] = 0;
      local_118 = plVar1;
      uStack_110 = local_b8;
      FUN_03faa19c(&DAT_09535188,1);
      FUN_03f5f178(&local_108,&DAT_09535188,local_120);
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
LAB_03fa8b54:
    FUN_03f5d920(auStack_38);
    return lVar3;
  }
  FUN_03fa5324(uVar4,1);
LAB_03fa8b9c:
  uVar4 = FUN_03fa5d60(&local_108);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_03f5d920(auStack_38);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar4);
}

