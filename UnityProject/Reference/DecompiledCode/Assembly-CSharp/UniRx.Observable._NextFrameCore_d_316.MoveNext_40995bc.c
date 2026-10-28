// rea decompile_all
// name: UniRx.Observable.<NextFrameCore>d__316$$MoveNext
// address: 0x40995bc
// body: available
// range: 0x40995bc-0x40997a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40997a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool UniRx_Observable_<NextFrameCore>d__316__MoveNext(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09515d8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09515d8c = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x20,0);
    if ((uVar3 & 1) == 0) {
      plVar7 = *(long **)(param_1 + 0x28);
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515ed7 == '\0') {
        FUN_03f5c2a4(&DAT_0918c670);
        DAT_09515ed7 = '\x01';
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar2 = **(undefined1 **)(DAT_0918c670 + 0xb8);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917b288) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04099718;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b288,0);
LAB_04099718:
        (*(code *)*puVar4)(plVar7,uVar2,puVar4[1]);
        plVar7 = *(long **)(param_1 + 0x28);
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b288) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_04099780;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b288,2);
LAB_04099780:
          (*(code *)*puVar4)(plVar7,puVar4[1]);
          goto LAB_0409978c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0409978c:
  return iVar1 == 0;
}

