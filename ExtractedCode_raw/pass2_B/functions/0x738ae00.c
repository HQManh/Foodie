// rea decompile_all
// name: MessagePack.MessagePackReader$$TrySkip
// address: 0x738ae00
// body: available
// range: 0x738ae00-0x738b0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738aed8 to 0x6098544 FUN_06098544 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x738b050 to 0x738b100 MessagePack.MessagePackReader$$TrySkipNextMap (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x738b068 to 0x738b188 MessagePack.MessagePackReader$$TrySkipNextArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong MessagePack_MessagePackReader__TrySkip(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_09520a8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188148);
    FUN_03f5c2a4(&DAT_091b9fa0);
    FUN_03f5c2a4(&DAT_091b9fe8);
    DAT_09520a8a = 1;
  }
  local_34 = 0;
  local_40 = 0;
  lVar4 = FUN_06097630(param_1,DAT_091b9fe8);
  uVar3 = 0;
  if (lVar4 == 0) goto LAB_0738b0e8;
  uVar3 = MessagePack_MessagePackReader__get_NextCode(param_1);
  if (*(int *)(DAT_09188148 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188148);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    if (*(int *)(DAT_09188148 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = uVar3 & 0xff;
    if (uVar1 < 0xe0) {
      if (uVar1 < 0xce) {
        if (uVar1 < 0xcb) {
          if ((uVar1 - 0xc2 < 2) || (uVar1 == 0xc0)) goto LAB_0738aebc;
          if (uVar1 == 0xca) goto LAB_0738af74;
        }
        else {
          if (uVar1 == 0xcb) {
LAB_0738af64:
            uVar6 = 9;
            goto LAB_0738aec8;
          }
          if (uVar1 == 0xcc) {
LAB_0738af94:
            uVar6 = 2;
            goto LAB_0738aec8;
          }
          if (uVar1 == 0xcd) goto LAB_0738af84;
        }
      }
      else if (uVar1 < 0xd1) {
        if (uVar1 == 0xce) {
LAB_0738af74:
          uVar6 = 5;
          goto LAB_0738aec8;
        }
        if (uVar1 == 0xcf) goto LAB_0738af64;
        if (uVar1 == 0xd0) goto LAB_0738af94;
      }
      else {
        if (uVar1 == 0xd1) {
LAB_0738af84:
          uVar6 = 3;
          goto LAB_0738aec8;
        }
        if (uVar1 == 0xd2) goto LAB_0738af74;
        if (uVar1 == 0xd3) goto LAB_0738af64;
      }
      if (*(int *)(DAT_09188148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = MessagePack_MessagePackCode__IsFixMap(uVar3);
      if (((uVar5 & 1) != 0) || ((uVar3 & 0xfe) == 0xde)) {
        uVar5 = MessagePack_MessagePackReader__TrySkipNextMap(param_1);
        return uVar5;
      }
      if (*(int *)(DAT_09188148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = MessagePack_MessagePackCode__IsFixArray(uVar3);
      if (((uVar5 & 1) != 0) || ((uVar3 & 0xfe) == 0xdc)) {
        uVar5 = MessagePack_MessagePackReader__TrySkipNextArray(param_1);
        return uVar5;
      }
      if (*(int *)(DAT_09188148 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = MessagePack_MessagePackCode__IsFixStr(uVar3);
      if ((uVar5 & 1) == 0) {
        uVar1 = (uVar3 & 0xff) - 0xc4;
        if (0x17 < uVar1) {
LAB_0738b0cc:
          MessagePack_MessagePackReader__ThrowInvalidCode(uVar3);
LAB_0738b0d4:
          uVar5 = MessagePack_MessagePackReader__TryGetBytesLength(param_1,&local_34);
          goto joined_r0x0738b0e0;
        }
        uVar2 = 1 << (ulong)(uVar1 & 0x1f);
        if ((uVar2 & 0x1f0038) == 0) {
          if ((uVar2 & 7) == 0) {
            if ((1 << (ulong)(uVar1 & 0x1f) & 0xe00000U) != 0) goto LAB_0738b014;
            goto LAB_0738b0cc;
          }
          goto LAB_0738b0d4;
        }
        uVar5 = MessagePack_MessagePackReader__TryReadExtensionFormatHeader(param_1,&local_40);
        if ((uVar5 & 1) != 0) {
          uVar6 = local_40._4_4_;
          goto LAB_0738aec8;
        }
      }
      else {
LAB_0738b014:
        uVar5 = FUN_0739caa4(param_1,&local_34,0);
joined_r0x0738b0e0:
        if ((uVar5 & 1) != 0) {
          uVar3 = FUN_06098544(param_1,local_34,DAT_091b9fa0);
          goto LAB_0738b0e8;
        }
      }
      uVar3 = 0;
LAB_0738b0e8:
      return (ulong)(uVar3 & 1);
    }
  }
LAB_0738aebc:
  uVar6 = 1;
LAB_0738aec8:
  uVar5 = FUN_06098544(param_1,uVar6,DAT_091b9fa0);
  return uVar5;
}

