// rea decompile_all
// name: MessagePack.MessagePackSerializer$$FromJsonCore
// address: 0x7394d14
// body: available
// range: 0x7394d14-0x73950ef inclusive
// range: 0x739517c-0x73951b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73951b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73951b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int MessagePack_MessagePackSerializer__FromJsonCore(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_09520aea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837e0);
    FUN_03f5c2a4(&DAT_091d3630);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091ba048);
    FUN_03f5c2a4(&DAT_0917e6a0);
    DAT_09520aea = 1;
  }
  local_70 = ZEXT816(0);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_100 = ZEXT816(0);
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auVar9 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (param_1 == 0) {
LAB_073951b4:
    local_100 = auVar9;
    local_70 = auVar3;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar8 = 0;
LAB_07394de8:
  MessagePack_TinyJsonReader__ReadNextToken(param_1);
  MessagePack_TinyJsonReader__ReadValue(param_1);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 6) {
    auVar9 = local_100;
    auVar3 = local_70;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        if ((param_3 != 0) && (*(long *)(param_3 + 0x30) != 0)) {
          auVar9 = MessagePack_SequencePool__Rent(*(long *)(param_3 + 0x30),0);
          local_170 = 0;
          puStack_168 = local_70;
          local_70 = auVar9;
          MessagePack_MessagePackWriter__Clone(&local_1d0,param_2,auVar9._8_8_,0);
          memcpy(&local_d0,&local_1d0,0x60);
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = MessagePack_MessagePackSerializer__FromJsonCore(param_1,&local_d0,param_3);
          MessagePack_MessagePackWriter__Flush(&local_d0,0);
          MessagePack_MessagePackWriter__WriteMapHeader(param_2,(uVar5 & 0xffffffff) >> 1,0);
          uVar7 = local_70._8_8_;
          if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_060c901c(&local_1d0,uVar7,DAT_091ba048);
          uStack_e8 = uStack_1c8;
          local_f0 = local_1d0;
          local_e0 = local_1c0;
          MessagePack_MessagePackWriter__WriteRaw(param_2,&local_f0,0);
          puVar6 = local_70;
          goto LAB_0739504c;
        }
        goto LAB_073951b4;
      }
      if (iVar1 == 0) {
        return iVar8;
      }
      if (iVar1 == 2) {
        return iVar8;
      }
      goto LAB_07394de8;
    }
    if (iVar1 == 3) {
      if ((param_3 != 0) && (*(long *)(param_3 + 0x30) != 0)) {
        auVar9 = MessagePack_SequencePool__Rent(*(long *)(param_3 + 0x30),0);
        local_170 = 0;
        puStack_168 = local_100;
        local_100 = auVar9;
        MessagePack_MessagePackWriter__Clone(&local_1d0,param_2,auVar9._8_8_,0);
        memcpy(&local_160,&local_1d0,0x60);
        if (*(int *)(DAT_09188188 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = MessagePack_MessagePackSerializer__FromJsonCore(param_1,&local_160,param_3);
        MessagePack_MessagePackWriter__Flush(&local_160,0);
        FUN_0739cd20(param_2,uVar4,0);
        uVar7 = local_100._8_8_;
        if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060c901c(&local_1d0,uVar7,DAT_091ba048);
        uStack_e8 = uStack_1c8;
        local_f0 = local_1d0;
        local_e0 = local_1c0;
        MessagePack_MessagePackWriter__WriteRaw(param_2,&local_f0,0);
        puVar6 = local_100;
LAB_0739504c:
        MessagePack_SequencePool_Rental__Dispose(puVar6,0);
        goto LAB_07395054;
      }
      goto LAB_073951b4;
    }
    if (iVar1 != 5) {
      if (iVar1 == 4) {
        return iVar8;
      }
      goto LAB_07394de8;
    }
    bVar2 = *(byte *)(param_1 + 0x2c);
    if (bVar2 < 5) {
      if (bVar2 == 3) {
        MessagePack_MessagePackWriter__Write(*(undefined8 *)(param_1 + 0x30),param_2,0);
      }
      else if (bVar2 == 4) {
        MessagePack_MessagePackWriter__Write(param_2,*(undefined8 *)(param_1 + 0x38),0);
      }
    }
    else if (bVar2 == 5) {
      MessagePack_MessagePackWriter__Write(param_2,*(undefined8 *)(param_1 + 0x40),0);
    }
    else if (bVar2 == 6) {
      if (*(int *)(DAT_091837e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar9 = local_100;
      auVar3 = local_70;
      if (**(long **)(DAT_091837e0 + 0xb8) != 0) {
        MessagePack_Formatters_DecimalFormatter__Serialize
                  (**(long **)(DAT_091837e0 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x50),param_3,0);
        goto LAB_07395054;
      }
      goto LAB_073951b4;
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 6) {
      FUN_0642dfb8(param_2,*(undefined8 *)(param_1 + 0x58),0);
    }
    else {
      if (iVar1 != 7) goto LAB_07394de8;
      uVar7 = 1;
LAB_07394f7c:
      MessagePack_MessagePackWriter__Write(param_2,uVar7,0);
    }
  }
  else {
    if (iVar1 == 8) {
      uVar7 = 0;
      goto LAB_07394f7c;
    }
    if (iVar1 != 9) goto LAB_07394de8;
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
  }
LAB_07395054:
  if (iVar8 == -1) {
    uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,DAT_091d3630);
  }
  iVar8 = iVar8 + 1;
  goto LAB_07394de8;
}

