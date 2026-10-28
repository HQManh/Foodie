// rea decompile_all
// name: MessagePack.MessagePackSerializer$$ConvertFromJson
// address: 0x73945b4
// body: available
// range: 0x73945b4-0x7394827 inclusive
// range: 0x73948b8-0x73949a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7394818 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739481c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7394824 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73949a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07394820) */
/* WARNING: Removing unreachable block (ram,0x0739499c) */

void MessagePack_MessagePackSerializer__ConvertFromJson
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_158;
  long **pplStack_150;
  undefined8 local_148;
  long local_f8;
  undefined1 *puStack_f0;
  long *local_e8;
  undefined8 local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  long *local_c8;
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
  undefined1 local_60 [16];
  
  if ((DAT_09520ae9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091ba048);
    FUN_03f5c2a4(&DAT_0917e6a0);
    FUN_03f5c2a4(&DAT_0918be48);
    DAT_09520ae9 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_c8 = (long *)0x0;
  local_e0 = 0;
  pplStack_d8 = (long **)0x0;
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
  local_d0 = 0;
  local_e8 = (long *)0x0;
  if (param_3 == 0) {
    if (*(int *)(DAT_09188188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_3 = MessagePack_MessagePackSerializer__get_DefaultOptions();
    if (param_3 == 0) goto LAB_0739481c;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918be48);
    System_Object___ctor(plVar4,0);
    plVar4[2] = param_1;
    thunk_FUN_03f5d7b8(plVar4 + 2,param_1);
    lVar6 = DAT_09188188;
    *(undefined1 *)(plVar4 + 3) = 0;
    pplStack_150 = &local_e8;
    local_158 = 0;
    local_e8 = plVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_MessagePackSerializer__FromJsonCore(plVar4,param_2,param_3);
    plVar4 = local_e8;
    if (local_e8 != (long *)0x0) {
      lVar6 = *local_e8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07394970;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_e8,DAT_09185a58,0);
LAB_07394970:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  else {
    if (*(long *)(param_3 + 0x30) == 0) {
LAB_0739481c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_60 = MessagePack_SequencePool__Rent(*(long *)(param_3 + 0x30),0);
    puStack_f0 = local_60;
    local_f8 = 0;
    MessagePack_MessagePackWriter__Clone(&local_158,param_2,local_60._8_8_,0);
    memcpy(&local_c0,&local_158,0x60);
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918be48);
    System_Object___ctor(plVar4,0);
    plVar4[2] = param_1;
    thunk_FUN_03f5d7b8(plVar4 + 2,param_1);
    lVar6 = DAT_09188188;
    *(undefined1 *)(plVar4 + 3) = 0;
    pplStack_150 = &local_c8;
    local_158 = 0;
    local_c8 = plVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_MessagePackSerializer__FromJsonCore(plVar4,&local_c0,param_3);
    plVar4 = local_c8;
    if (local_c8 != (long *)0x0) {
      lVar6 = *local_c8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0739477c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_0739477c:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    MessagePack_MessagePackWriter__Flush(&local_c0,0);
    uVar3 = local_60._8_8_;
    if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060c901c(&local_158,uVar3,DAT_091ba048);
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    uVar2 = *(undefined4 *)(param_3 + 0x1c);
    pplStack_d8 = pplStack_150;
    local_e0 = local_158;
    local_d0 = local_148;
    if (*(int *)(DAT_09188188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_MessagePackSerializer__ToLZ4BinaryCore(&local_e0,param_2,uVar1,uVar2);
    lVar6 = local_f8;
    MessagePack_SequencePool_Rental__Dispose(puStack_f0,0);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar6);
    }
  }
  return;
}

