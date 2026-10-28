// rea decompile_all
// name: FUN_0739d124
// address: 0x739d124
// body: available
// range: 0x739d124-0x739d36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0739d124(undefined1 *param_1,long *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_3 + 0x20);
  *param_1 = 1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03f95a6c();
    lVar2 = *(long *)(param_3 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar2 = param_2[2];
  lVar5 = param_2[1];
  lVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x10) = lVar5;
  *(long *)(param_1 + 8) = lVar4;
  lVar2 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  local_50 = 0;
  uStack_48 = 0;
  System_SequencePosition___ctor(&local_50,*param_2,(int)param_2[2],0);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = uStack_48;
  *(undefined8 *)(param_1 + 0x20) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  local_60 = FUN_05fdc42c(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48));
  lVar2 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  auVar6 = FUN_04a6d544(local_60,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50));
  lVar2 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03f95a6c();
    lVar2 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  iVar3 = auVar6._8_4_;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  auVar7 = FUN_05fddec4(param_2,(long)iVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar7;
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar6;
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  param_1[0x50] = 0 < iVar3;
  if (iVar3 < 1) {
    lVar2 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if (*param_2 != param_2[1]) {
      lVar2 = *(long *)(param_3 + 0x20);
      param_1[0x50] = 1;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      FUN_06097e10(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
    }
  }
  return;
}

