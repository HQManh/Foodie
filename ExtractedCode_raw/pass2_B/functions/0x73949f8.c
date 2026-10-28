// rea decompile_all
// name: MessagePack.MessagePackSerializer$$ConvertFromJson
// address: 0x73949f8
// body: available
// range: 0x73949f8-0x7394c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7394c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394c64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394c6c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394c70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07394c68) */
/* WARNING: Removing unreachable block (ram,0x07394bd0) */

undefined8
MessagePack_MessagePackSerializer__ConvertFromJson
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_140;
  long **pplStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  if ((DAT_09520ae8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091ba038);
    FUN_03f5c2a4(&DAT_0918b3e8);
    DAT_09520ae8 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_b8 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_d0 = 0;
  local_c0 = 0;
  if (param_2 == 0) {
    if (*(int *)(DAT_09188188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = MessagePack_MessagePackSerializer__get_DefaultOptions();
    if (param_2 == 0) goto LAB_07394c5c;
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    local_50 = MessagePack_SequencePool__Rent(*(long *)(param_2 + 0x30),0);
    local_d8 = local_50;
    local_e0 = 0;
    pplStack_138 = (long **)0x0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    MessagePack_MessagePackWriter___ctor(&local_140,local_50._8_8_,0);
    uVar3 = local_e8;
    memcpy(&local_b0,&local_140,0x50);
    uStack_58 = uVar3;
    local_60 = param_3;
    plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b3e8);
    System_IO_StringReader___ctor(plVar1,param_1,0);
    pplStack_138 = &local_b8;
    local_140 = 0;
    local_b8 = plVar1;
    if (*(int *)(DAT_09188188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_MessagePackSerializer__ConvertFromJson(plVar1,&local_b0,param_2);
    plVar1 = local_b8;
    if (local_b8 != (long *)0x0) {
      lVar4 = *local_b8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07394bb8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185a58,0);
LAB_07394bb8:
      (*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    MessagePack_MessagePackWriter__Flush(&local_b0,0);
    if (local_50._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060c8e44(&local_140,local_50._8_8_,DAT_091ba038);
    pplStack_c8 = pplStack_138;
    local_d0 = local_140;
    local_c0 = local_130;
    uVar3 = FUN_04a58db0(&local_d0,DAT_091c4278);
    lVar4 = local_e0;
    MessagePack_SequencePool_Rental__Dispose(local_d8,0);
    if (lVar4 == 0) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(lVar4);
  }
LAB_07394c5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

