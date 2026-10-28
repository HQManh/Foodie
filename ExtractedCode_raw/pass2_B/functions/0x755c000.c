// rea decompile_all
// name: System.Collections.ArrayList.IListWrapper$$InsertRange
// address: 0x755c000
// body: available
// range: 0x755c000-0x755c3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755c320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755c3c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList_IListWrapper__InsertRange(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_09521990 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09185f80);
    DAT_09521990 = 1;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09218730);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091feb58);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar6,0);
  }
  else {
    if ((-1 < param_2) &&
       (iVar1 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0)),
       param_2 <= iVar1)) {
      lVar7 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091857d8) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0755c0ec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_3,DAT_091857d8,1);
LAB_0755c0ec:
      iVar1 = (*(code *)*puVar2)(param_3,puVar2[1]);
      if (iVar1 < 1) {
        return;
      }
      plVar3 = (long *)param_1[5];
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        if ((*(byte *)(DAT_09181588 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09181588 + 0x130) * 8 + -8) ==
            DAT_09181588)) {
          (**(code **)(lVar7 + 0x3b8))(plVar3,param_2,param_3,*(undefined8 *)(lVar7 + 0x3c0));
LAB_0755c2fc:
          *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          return;
        }
      }
      lVar7 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b08) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0755c190;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185b08,0);
LAB_0755c190:
      plVar3 = (long *)(*(code *)*puVar2)(param_3,puVar2[1]);
      if (plVar3 != (long *)0x0) {
        do {
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0755c200;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0755c200:
          uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if ((uVar8 & 1) == 0) goto LAB_0755c2fc;
          lVar7 = *plVar3;
          plVar10 = (long *)param_1[5];
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_0755c264;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_0755c264:
          uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if (plVar10 == (long *)0x0) break;
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185f80) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                goto LAB_0755c2c8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185f80,8);
LAB_0755c2c8:
          (*(code *)*puVar2)(plVar10,param_2,uVar4,puVar2[1]);
          param_2 = param_2 + 1;
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092049a8);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091e5a40);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

