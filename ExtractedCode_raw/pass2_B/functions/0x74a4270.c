// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodCall$$CopyFrom
// address: 0x74a4270
// body: available
// range: 0x74a4270-0x74a463b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a4620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a462c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a4638 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodCall__CopyFrom(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09521394 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521394 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_074a4310;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,7);
LAB_074a4310:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[2] = lVar5;
  thunk_FUN_03f5d7b8();
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_074a437c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,6);
LAB_074a437c:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[3] = lVar5;
  thunk_FUN_03f5d7b8();
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_074a43e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,4);
LAB_074a43e8:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[4] = lVar5;
  thunk_FUN_03f5d7b8();
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_074a4454;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,1);
LAB_074a4454:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[5] = lVar5;
  thunk_FUN_03f5d7b8();
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_074a44c0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,5);
LAB_074a44c0:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  uVar1 = DAT_09180748;
  if (lVar5 == 0) {
    lVar4 = 0;
    param_1[6] = 0;
  }
  else {
    lVar4 = thunk_FUN_03f99350(lVar5,DAT_09180748);
    uVar2 = DAT_09180748;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar5,uVar1);
    }
    param_1[6] = lVar4;
    lVar4 = thunk_FUN_03f99350(lVar5,uVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar5,uVar2);
    }
  }
  thunk_FUN_03f5d7b8(param_1 + 6,lVar4);
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_074a4574;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_074a4574:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[7] = lVar5;
  thunk_FUN_03f5d7b8();
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_091860a8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_074a45e0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,2);
LAB_074a45e0:
  lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
  param_1[8] = lVar5;
  thunk_FUN_03f5d7b8();
                    /* WARNING: Could not recover jumptable at 0x074a461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  return;
}

