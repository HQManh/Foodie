// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.<YieldCore>d__9$$MoveNext
// address: 0x73b3728
// body: available
// range: 0x73b3728-0x73b387b inclusive
// range: 0x73b3888-0x73b3bb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b383c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3ba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3ba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b3bb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_Internal_AutomataDictionary_<YieldCore>d__9__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_09520bf0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a800);
    FUN_03f5c2a4(&DAT_0917a2b0);
    FUN_03f5c2a4(&DAT_0917a920);
    FUN_03f5c2a4(&DAT_0917af00);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9808);
    DAT_09520bf0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_40 = &local_38;
  local_48 = 0;
  if (iVar1 == 2) goto LAB_073b3a00;
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x48) != 0) goto LAB_073b3984;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar1 != 0) {
    return 0;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a800) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_073b384c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a800,0);
LAB_073b384c:
  uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  *(undefined8 *)(local_38 + 0x40) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
  do {
    plVar7 = *(long **)(local_38 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073b38e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_073b38e4:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      MessagePack_Internal_AutomataDictionary_<YieldCore>d__9__<>m__Finally1();
      *(undefined8 *)(local_38 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_38 + 0x40),0);
      return 0;
    }
    plVar7 = *(long **)(local_38 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917af00) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073b3950;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917af00,0);
LAB_073b3950:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(local_38 + 0x48) = uVar3;
    thunk_FUN_03f5d7b8();
    lVar4 = *(long *)(local_38 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar4 + 0x18) != -1) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_05614570(&local_58,*(undefined8 *)(lVar4 + 0x20),*(int *)(lVar4 + 0x18),DAT_091a9808);
      *(undefined8 *)(local_38 + 0x20) = uStack_50;
      *(undefined8 *)(local_38 + 0x18) = local_58;
      thunk_FUN_03f5d7b8(local_38 + 0x18,0);
      *(undefined4 *)(local_38 + 0x10) = 1;
      return 1;
    }
LAB_073b3984:
    MessagePack_Internal_AutomataDictionary_AutomataNode__YieldChildren();
    plVar7 = (long *)MessagePack_Internal_AutomataDictionary__YieldCore();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a2b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073b39e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a2b0,0);
LAB_073b39e0:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(local_38 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8();
    param_1 = local_38;
LAB_073b3a00:
    plVar7 = *(long **)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_073b3a5c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_073b3a5c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(local_38 + 0x50);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_073b3ae0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    MessagePack_Internal_AutomataDictionary_<YieldCore>d__9__<>m__Finally2();
    *(undefined8 *)(local_38 + 0x50) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_38 + 0x50),0);
    *(undefined8 *)(local_38 + 0x48) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_38 + 0x48),0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_0917a920) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_073b3b58;
    }
  }
LAB_073b3ae0:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a920,0);
LAB_073b3b58:
  auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  *(undefined1 (*) [16])(local_38 + 0x18) = auVar8;
  thunk_FUN_03f5d7b8((undefined1 (*) [16])(local_38 + 0x18),0);
  *(undefined4 *)(local_38 + 0x10) = 2;
  return 1;
}

