// rea decompile_all
// name: System.IO.Enumeration.FileSystemEntry$$Initialize
// address: 0x75909f0
// body: available
// range: 0x75909f0-0x7590ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Enumeration_FileSystemEntry__Initialize
               (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09521b5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9800);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_09521b5f = 1;
  }
  param_1[0x58] = param_4;
  param_1[0x59] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x5a] = param_6;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  param_1[0x5b] = param_7;
  param_1[0x5c] = param_9;
  uVar2 = DAT_091b9800;
  param_1[0x5d] = param_10;
  param_1[0x11] = param_11;
  param_1[0x12] = param_12;
  auVar8 = FUN_05ff7148(uVar2);
  uVar2 = DAT_091b9800;
  *(undefined1 (*) [16])(param_1 + 0x13) = auVar8;
  auVar8 = FUN_05ff7148(uVar2);
  *(undefined1 (*) [16])(param_1 + 0x15) = auVar8;
  iVar6 = (int)((ulong)param_3 >> 0x20);
  if ((iVar6 == 0) || (iVar6 == 10)) {
    auVar8 = System_IO_Enumeration_FileSystemEntry__get_FullPath(param_1);
    if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar5 = Interop_Sys__Stat(auVar8._0_8_,auVar8._8_8_,&uStack_d0,0);
    if (iVar5 < 0) {
      auVar8 = System_IO_Enumeration_FileSystemEntry__get_FullPath(param_1);
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = Interop_Sys__LStat(auVar8._0_8_,auVar8._8_8_,&uStack_d0,0);
      if (iVar5 < 0) goto LAB_07590bdc;
    }
    bVar3 = (uStack_d0._4_4_ & 0xf000) == 0x4000;
    if (iVar6 == 0) goto LAB_07590be4;
LAB_07590ba0:
    if (iVar6 == 10) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[0x10] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      System_IO_FileStatus__Initialize(param_1 + 2,bVar3,0);
      if (bVar3 == false) {
        uVar7 = 0x400;
      }
      else {
        uVar7 = 0x410;
      }
      goto LAB_07590cac;
    }
LAB_07590c6c:
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[0x10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    System_IO_FileStatus__Initialize(param_1 + 2,bVar3,0);
    if (bVar3 == false) {
      uVar7 = 0;
      goto LAB_07590cac;
    }
  }
  else {
    if (iVar6 != 4) {
LAB_07590bdc:
      bVar3 = false;
      if (iVar6 != 0) goto LAB_07590ba0;
LAB_07590be4:
      auVar8 = System_IO_Enumeration_FileSystemEntry__get_FullPath(param_1);
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar6 = Interop_Sys__LStat(auVar8._0_8_,auVar8._8_8_,&local_140,0);
      if (-1 < iVar6) {
        uVar7 = local_140._4_4_ & 0xf000;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[0xf] = 0;
        param_1[0xe] = 0;
        param_1[0x10] = 0;
        System_IO_FileStatus__Initialize(param_1 + 2,bVar3,0);
        bVar4 = uVar7 == 0xa000;
        uVar7 = 0x410;
        if (!bVar4) {
          uVar7 = 0x10;
        }
        if (bVar3 == false) {
          uVar7 = (uint)bVar4 << 10;
        }
        goto LAB_07590cac;
      }
      goto LAB_07590c6c;
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[0x10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    System_IO_FileStatus__Initialize(param_1 + 2,1,0);
  }
  uVar7 = 0x10;
LAB_07590cac:
  uVar1 = uVar7 | 2;
  if (*param_2 != '.') {
    uVar1 = uVar7;
  }
  uVar7 = 0x80;
  if (uVar1 != 0) {
    uVar7 = uVar1;
  }
  *(uint *)(param_1 + 0x57) = uVar7;
  return;
}

