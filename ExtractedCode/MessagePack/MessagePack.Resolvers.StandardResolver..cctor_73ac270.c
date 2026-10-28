// rea decompile_all
// name: MessagePack.Resolvers.StandardResolver$$.cctor
// address: 0x73ac270
// body: available
// range: 0x73ac270-0x73ac5a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ac460 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ac594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ac598 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ac5a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_StandardResolver___cctor(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long local_40;
  undefined8 local_38;
  
  if ((DAT_09520bba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e08);
    FUN_03f5c2a4(&DAT_09183e78);
    FUN_03f5c2a4(&DAT_091800b0);
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_091b9868);
    FUN_03f5c2a4(&DAT_091b9860);
    FUN_03f5c2a4(&DAT_091b9870);
    FUN_03f5c2a4(&DAT_091baad0);
    FUN_03f5c2a4(&DAT_091baac8);
    FUN_03f5c2a4(&DAT_0918b1a0);
    FUN_03f5c2a4(&DAT_0918b190);
    DAT_09520bba = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_09183e08 + 0xb8) != '\0') {
    if (*(int *)(DAT_0918b1a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)**(long **)(DAT_0918b1a0 + 0xb8);
LAB_073ac4f4:
    plVar3 = (long *)(*(long *)(DAT_0918b190 + 0xb8) + 0x10);
    *plVar3 = (long)plVar7;
    thunk_FUN_03f5d7b8(plVar3,plVar7);
    uVar4 = thunk_FUN_03f9944c(DAT_0918b190);
    System_Object___ctor(uVar4,0);
    **(undefined8 **)(DAT_0918b190 + 0xb8) = uVar4;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b190 + 0xb8),uVar4);
    uVar8 = **(undefined8 **)(DAT_0918b190 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_09188190);
    MessagePack_MessagePackSerializerOptions___ctor(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(*(long *)(DAT_0918b190 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
    return;
  }
  if (*(int *)(DAT_0918b1a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = **(long **)(DAT_0918b1a0 + 0xb8);
  if (lVar9 != 0) {
    plVar7 = (long *)FUN_03f5c394(DAT_091800b0,*(int *)(lVar9 + 0x18) + 1);
    lVar10 = DAT_091baac8;
    uVar12 = *(ulong *)(lVar9 + 0x18);
    local_40 = lVar9 + 0x20;
    uVar11 = (uint)uVar12;
    local_38 = CONCAT44(local_38._4_4_,uVar11);
    if (plVar7 == (long *)0x0) {
      plVar3 = (long *)0x0;
      uVar6 = 0;
    }
    else {
      uVar4 = System_Object__GetType(plVar7,0);
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
      uVar1 = System_Type__op_Inequality(uVar4,uVar8,0);
      if ((uVar1 & 1) != 0) {
        System_ThrowHelper__ThrowArrayTypeMismatchException(0);
      }
      uVar6 = *(uint *)(plVar7 + 3);
      plVar3 = plVar7 + 4;
    }
    if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091baad0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    FUN_060195f8(&local_40,plVar3,uVar12 & 0xffffffff,DAT_091b9868);
    uVar11 = (uint)local_38;
    lVar9 = (long)(int)(uint)local_38;
    if (*(int *)(DAT_09183e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar7 != (long *)0x0) {
      lVar10 = **(long **)(DAT_09183e78 + 0xb8);
      if ((lVar10 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if (*(uint *)(plVar7 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[lVar9 + 4] = lVar10;
      thunk_FUN_03f5d7b8(plVar7 + lVar9 + 4,lVar10);
      goto LAB_073ac4f4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

