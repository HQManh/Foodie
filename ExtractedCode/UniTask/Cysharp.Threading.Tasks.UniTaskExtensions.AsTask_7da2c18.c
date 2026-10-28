// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions$$AsTask
// address: 0x7da2c18
// body: available
// range: 0x7da2c18-0x7da2ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da2ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTaskExtensions__AsTask(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_50;
  ulong uStack_48;
  
  if ((DAT_09525e9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_091d9fa8);
    FUN_03f5c2a4(&DAT_091bc7b0);
    FUN_03f5c2a4(&DAT_091bc7e8);
    FUN_03f5c2a4(&DAT_0917ed48);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091f1f20);
    FUN_03f5c2a4(&DAT_09195970);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e9f = 1;
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_50 = param_1;
  uStack_48 = param_2;
  thunk_FUN_03f5d7b8(&local_50,0);
  uVar2 = uStack_48;
  plVar1 = local_50;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07da2d8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,0);
LAB_07da2d8c:
    iVar3 = (*(code *)*puVar4)(plVar1,uVar2 & 0xffffffff,puVar4[1]);
    if (iVar3 == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917ed48);
      FUN_0620c29c(lVar6,DAT_091bc7b0);
      if (*(int *)(DAT_09195970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_09195970 + 0xb8);
      lVar10 = puVar4[2];
      if (lVar10 == 0) {
        if (*(int *)(DAT_09195970 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_09195970 + 0xb8);
        }
        uVar11 = *puVar4;
        lVar10 = thunk_FUN_03f9944c(DAT_09174850);
        FUN_070a8c30(lVar10,uVar11,DAT_091f1f20,0);
        plVar5 = (long *)(*(long *)(DAT_09195970 + 0xb8) + 0x10);
        *plVar5 = lVar10;
        thunk_FUN_03f5d7b8(plVar5,lVar10);
      }
      uVar11 = FUN_04d61fa0(lVar6,plVar1,uVar2,DAT_091d9fa8);
      if (DAT_0951da74 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_0951da74 = '\x01';
      }
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07da2fb8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,1);
LAB_07da2fb8:
      (*(code *)*puVar4)(plVar1,lVar10,uVar11,uVar2 & 0xffffffff,puVar4[1]);
      if (lVar6 != 0) {
        return *(undefined8 *)(lVar6 + 0x10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07da2f40;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091868c0,2);
LAB_07da2f40:
    (*(code *)*puVar4)(plVar1,uVar2 & 0xffffffff,puVar4[1]);
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095175b2 == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095175b2 = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
}

