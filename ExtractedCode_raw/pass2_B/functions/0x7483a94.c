// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadCustomProviderData
// address: 0x7483a94
// body: available
// range: 0x7483a94-0x7483df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7483de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7483de8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7483df0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadCustomProviderData
               (long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((DAT_09521275 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_0918acc8);
    DAT_09521275 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918acc8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918acc8 + 0x130) * 8 + -8) !=
          DAT_0918acc8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
    }
    lVar2 = thunk_FUN_03f9944c(DAT_0918acc8);
    System_Runtime_Remoting_Channels_SinkProviderData___ctor(lVar2,param_2,0);
    if (param_3 != (long *)0x0) {
      uVar9 = 0;
      do {
        lVar5 = *param_3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09194970) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_07483bd8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,4);
LAB_07483bd8:
        lVar5 = (*(code *)*puVar3)(param_3,puVar3[1]);
        if (lVar5 == 0) break;
        if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar9) {
          if ((plVar1 != (long *)0x0) && (plVar1 = (long *)plVar1[3], plVar1 != (long *)0x0)) {
            lVar5 = *plVar1;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 == 0) goto LAB_07483d80;
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_07483d68;
          }
          break;
        }
        if (lVar2 == 0) break;
        lVar5 = *param_3;
        plVar10 = *(long **)(lVar2 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09194970) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_07483c4c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,4);
LAB_07483c4c:
        lVar5 = (*(code *)*puVar3)(param_3,puVar3[1]);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *param_3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar11 = *(undefined8 *)(lVar5 + uVar9 * 8 + 0x20);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09194970) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07483cc0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,2);
LAB_07483cc0:
        uVar4 = (*(code *)*puVar3)(param_3,uVar9 & 0xffffffff,puVar3[1]);
        if (plVar10 == (long *)0x0) break;
        lVar5 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185a20) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07483d28;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a20,1);
LAB_07483d28:
        (*(code *)*puVar3)(plVar10,uVar11,uVar4,puVar3[1]);
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  goto LAB_07483de4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar8 = piVar8 + 4;
    if (uVar9 == 0) break;
LAB_07483d68:
    if (*(long *)(piVar8 + -2) == DAT_09185f80) {
      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_07483da0;
    }
  }
LAB_07483d80:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185f80,2);
LAB_07483da0:
  (*(code *)*puVar3)(plVar1,lVar2,puVar3[1]);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07483de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x268))(plVar1,lVar2,*(undefined8 *)(*plVar1 + 0x270));
    return;
  }
LAB_07483de4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

