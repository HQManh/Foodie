// rea decompile_all
// name: Microsoft.NET.StringTools.InternableString$$ExpensiveConvertToString
// address: 0x73ecc68
// body: available
// range: 0x73ecc68-0x73ecf9b inclusive
// range: 0x73ecfcc-0x73ed0cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ed0c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ed0c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ed0cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ecff4) */

long Microsoft_NET_StringTools_InternableString__ExpensiveConvertToString(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  void *__dest;
  undefined1 auVar10 [16];
  int local_d4;
  ulong local_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_09520df4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1ea0);
    FUN_03f5c2a4(&DAT_091a1ea8);
    FUN_03f5c2a4(&DAT_091a1eb0);
    FUN_03f5c2a4(&DAT_091aa8d8);
    FUN_03f5c2a4(&DAT_091aa8e8);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b9678);
    FUN_03f5c2a4(&DAT_091b9680);
    FUN_03f5c2a4(&DAT_091b9688);
    FUN_03f5c2a4(&DAT_091b9690);
    FUN_03f5c2a4(&DAT_091b97d8);
    FUN_03f5c2a4(&DAT_091b9808);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09520df4 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  puStack_88 = (ulong *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar9 = **(long **)(DAT_09535468 + 0xb8);
  }
  else if ((*(int *)(param_1 + 8) != *(int *)(param_1 + 0x20)) ||
          (lVar9 = *(long *)(param_1 + 0x10), lVar9 == 0)) {
    uVar3 = FUN_05ff6f60(param_1,DAT_091b9808);
    auVar10._8_8_ = local_70._8_8_;
    auVar10._0_8_ = local_70._0_8_;
    if (((uVar3 & 1) != 0) && (local_70 = auVar10, *(long *)(param_1 + 0x18) != 0)) {
      local_70 = FUN_056981cc(*(long *)(param_1 + 0x18),0,DAT_091aa8e8);
      uVar1 = FUN_05fd73e4(local_70,DAT_091b9688);
      local_d0 = 0;
      FUN_05c3078c(&local_d0,uVar1,DAT_091b6f98);
      if (((local_d0 & 0xff) != 0) && (*(int *)(param_1 + 0x20) == (int)(local_d0 >> 0x20))) {
        if (*(long *)(param_1 + 0x18) != 0) {
          auVar10 = FUN_056981cc(*(long *)(param_1 + 0x18),0,DAT_091aa8e8);
          local_70 = auVar10;
          lVar9 = FUN_05fd7400(local_70,DAT_091b9678);
          return lVar9;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    lVar9 = System_String__CreateString(0,0,*(undefined4 *)(param_1 + 0x20),0);
    if (lVar9 == 0) {
      __dest = (void *)0x0;
    }
    else {
      iVar2 = thunk_FUN_03f68190(0);
      __dest = (void *)(lVar9 + iVar2);
    }
    uVar3 = FUN_05ff6f60(param_1,DAT_091b9808);
    pvVar4 = __dest;
    if ((uVar3 & 1) == 0) {
      pvVar4 = (void *)FUN_05ff6af0(param_1,DAT_091b97d8);
      memcpy(__dest,pvVar4,(ulong)(uint)(*(int *)(param_1 + 8) << 1));
      pvVar4 = (void *)((long)__dest + (long)*(int *)(param_1 + 8) * 2);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_05699124(&local_d0,*(long *)(param_1 + 0x18),DAT_091aa8d8);
      puStack_88 = puStack_c8;
      local_90 = local_d0;
      uStack_78 = uStack_b8;
      local_80 = uStack_c0;
      puStack_c8 = &local_90;
      local_d0 = 0;
      while( true ) {
        uVar5 = FUN_0718425c(&local_90,DAT_091a1ea8);
        uVar3 = local_d0;
        if ((uVar5 & 1) == 0) break;
        uStack_98 = uStack_78;
        local_a0 = local_80;
        uVar3 = FUN_05fd73f0(&local_a0,DAT_091b9680);
        if ((uVar3 & 1) == 0) {
          auVar10 = FUN_04a6d894(&local_a0,DAT_091b9690);
          local_b0 = auVar10;
          __src = (void *)FUN_05ff6af0(local_b0,DAT_091b97d8);
          iVar2 = FUN_05fd73e4(&local_a0,DAT_091b9688);
          memcpy(pvVar4,__src,(ulong)(uint)(iVar2 << 1));
          iVar2 = FUN_05fd73e4(&local_a0,DAT_091b9688);
          pvVar4 = (void *)((long)pvVar4 + (long)iVar2 * 2);
        }
      }
      FUN_07184258(puStack_c8,DAT_091a1ea0);
      if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(uVar3);
      }
    }
    local_d4 = *(int *)(param_1 + 0x20);
    if ((void *)((long)__dest + (long)local_d4 * 2) != pvVar4) {
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_d4);
      lVar9 = (long)pvVar4 - (long)__dest;
      if (lVar9 < 0) {
        lVar9 = lVar9 + 1;
      }
      local_d0 = lVar9 >> 1;
      uVar7 = FUN_03f5c42c(DAT_09535440,&local_d0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09206bd0);
      uVar6 = System_String__Format(uVar8,uVar6,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar7 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d1040);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar6);
    }
  }
  return lVar9;
}

