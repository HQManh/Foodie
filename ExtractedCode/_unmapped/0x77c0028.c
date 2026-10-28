// rea decompile_all
// name: FUN_077c0028
// address: 0x77c0028
// body: available
// range: 0x77c0028-0x77c00bf inclusive
// range: 0x77c00d0-0x77c03cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_077c0028(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int in_w8;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  ulong uVar8;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined1 auVar9 [16];
  undefined4 uStack0000000000000008;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  
  uStack0000000000000008 = 0;
  if (in_w8 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 8);
    *(undefined8 *)(unaff_x19 + 8) = 0;
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
    goto LAB_077c01c0;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(unaff_x27 + 0xcb0) == '\0') {
    FUN_03f5c2a4(&DAT_09180dc0);
    *(undefined1 *)(unaff_x27 + 0xcb0) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = *unaff_x22;
  }
  uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(lVar3 + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    *(long *)(unaff_x19 + 6) = lVar3 + 8;
    while( true ) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(char *)(unaff_x27 + 0xcb0) == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        *(undefined1 *)(unaff_x27 + 0xcb0) = 1;
      }
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *unaff_x22;
      }
      uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(lVar3 + 0xb8),0);
      if ((uVar4 & 1) == 0) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
      if (*(long *)(unaff_x19 + 6) <= lVar3) break;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = UnityEngine_Application__get_internetReachability(0);
      if (iVar2 == 0) break;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar9 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      _in_stack_00000020 = auVar9;
      thunk_FUN_03f5d7b8(&stack0x00000020,0);
      uVar4 = in_stack_00000028;
      plVar7 = in_stack_00000020;
      _in_stack_00000010 = _in_stack_00000020;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_077c01ac;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar7,*unaff_x26,0);
LAB_077c01ac:
        iVar2 = (*(code *)*puVar5)(plVar7,uVar4 & 0xffffffff,puVar5[1]);
        if (iVar2 == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 8) = _in_stack_00000010;
          thunk_FUN_03f5d7b8(unaff_x19 + 8,0);
          FUN_049b14a8(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
LAB_077c01c0:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      plVar7 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar3 = *in_stack_00000010;
        uVar8 = in_stack_00000018 & 0xffff;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_077c023c;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(in_stack_00000010,*unaff_x26,2);
LAB_077c023c:
        (*(code *)*puVar5)(plVar7,uVar8,puVar5[1]);
      }
    }
  }
  cVar1 = DAT_095162d8;
  *unaff_x19 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(unaff_x19 + 2);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_077c0368;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_077c0368:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}

