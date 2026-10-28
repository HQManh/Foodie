// rea decompile_all
// name: MessagePack.Formatters.ByteArrayFormatter$$Deserialize
// address: 0x73e5be8
// body: available
// range: 0x73e5be8-0x73e5f03 inclusive
// range: 0x73e5f58-0x73e5f5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e5db8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5ec8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5f00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e5f58 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073e5da4) */
/* WARNING: Removing unreachable block (ram,0x073e5db4) */

long MessagePack_Formatters_ByteArrayFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  char local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_84;
  undefined8 local_80;
  long local_78;
  undefined7 local_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  if ((DAT_09520db2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00c8);
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_091c44a8);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    DAT_09520db2 = 1;
  }
  local_80 = 0;
  local_84 = 0;
  local_70 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_59 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  cVar2 = MessagePack_MessagePackReader__get_NextMessagePackType(param_2,0);
  if (cVar2 == '\a') {
    uVar4 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar5 = DAT_091c00c8;
    if (uVar4 == 0) {
      lVar7 = *(long *)(DAT_091c00c8 + 0x38);
      if (lVar7 == 0) {
        FUN_03f95ac8(DAT_091c00c8);
        lVar7 = *(long *)(lVar5 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
    }
    else {
      lVar5 = FUN_03f5c394(DAT_0917fc88,(ulong)uVar4);
      if ((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_073e5f58;
      }
      MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
      uVar8 = 0;
      local_c0 = '\0';
      uStack_bf = 0;
      uStack_b8 = SUB81(&local_78,0);
      uStack_b7 = (undefined7)((ulong)&local_78 >> 8);
      uStack_b0 = SUB81(&local_84,0);
      uStack_af = (undefined7)((ulong)&local_84 >> 8);
      if (0 < (int)uVar4) {
        do {
          local_80 = *(undefined8 *)(local_78 + 0x80);
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_80,0);
          uVar3 = MessagePack_MessagePackReader__ReadByte(local_78,0);
          if (lVar5 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_073e5f58;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar8) {
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            goto LAB_073e5f58;
          }
          *(undefined1 *)(lVar5 + 0x20 + uVar8) = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
      }
      local_84 = *(int *)(local_78 + 0x88);
      if (local_84 == -0x80000000) {
        uVar6 = FUN_03f5c560();
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,DAT_091c44a8);
        }
        goto LAB_073e5f58;
      }
      *(int *)(local_78 + 0x88) = local_84 + -1;
    }
  }
  else {
    MessagePack_MessagePackReader__ReadBytes(&local_c0,param_2,0);
    uStack_68 = uStack_b7;
    local_70 = uStack_bf;
    uStack_69 = uStack_b8;
    local_59 = (undefined1)uStack_a8;
    uStack_58 = (undefined7)((ulong)uStack_a8 >> 8);
    uStack_61 = uStack_b0;
    uStack_60 = uStack_af;
    if (local_c0 == '\0') {
      lVar5 = 0;
    }
    else {
      uStack_98 = CONCAT71(uStack_af,uStack_b0);
      local_a0 = CONCAT71(uStack_b7,uStack_b8);
      local_90 = uStack_a8;
      lVar5 = FUN_04a58db0(&local_a0,DAT_091c4278);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar5;
  }
LAB_073e5f58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

