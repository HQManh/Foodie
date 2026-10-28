// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMethodRef$$.ctor
// address: 0x749eab8
// body: available
// range: 0x749eab8-0x749ed83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749ed7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749ed80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_CADMethodRef___ctor(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  
  if ((DAT_0952136d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_0952136d = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_0749eb68;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091860a8,3);
LAB_0749eb68:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_03f5d7b8();
        bVar2 = System_Reflection_MethodBase__get_IsConstructor(plVar4,0);
        *(byte *)(param_1 + 0x10) = bVar2 & 1;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        thunk_FUN_03f5d7b8();
        lVar9 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
        if (lVar9 != 0) {
          lVar7 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar9 + 0x18));
          plVar5 = (long *)(param_1 + 0x28);
          *plVar5 = lVar7;
          thunk_FUN_03f5d7b8(plVar5,lVar7);
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            lVar7 = 0x20;
            do {
              if (uVar1 <= uVar12) goto LAB_0749ed80;
              plVar8 = *(long **)(lVar9 + lVar7);
              if (plVar8 == (long *)0x0) goto LAB_0749ed7c;
              lVar13 = *plVar5;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar8 == (long *)0x0) goto LAB_0749ed7c;
              uVar6 = (**(code **)(*plVar8 + 0x2e8))(plVar8,*(undefined8 *)(*plVar8 + 0x2f0));
              if (lVar13 == 0) goto LAB_0749ed7c;
              if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_0749ed80;
              *(undefined8 *)(lVar13 + lVar7) = uVar6;
              thunk_FUN_03f5d7b8(lVar13 + lVar7,uVar6);
              uVar1 = *(uint *)(lVar9 + 0x18);
              uVar12 = uVar12 + 1;
              lVar7 = lVar7 + 8;
            } while ((int)uVar12 < (int)uVar1);
          }
          if (*(char *)(param_1 + 0x10) == '\0') {
            uVar10 = (**(code **)(*plVar4 + 0x318))(plVar4,*(undefined8 *)(*plVar4 + 800));
            if ((uVar10 & 1) != 0) {
              lVar9 = (**(code **)(*plVar4 + 0x338))(plVar4,*(undefined8 *)(*plVar4 + 0x340));
              if (lVar9 == 0) goto LAB_0749ed7c;
              lVar7 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar9 + 0x18));
              plVar4 = (long *)(param_1 + 0x30);
              *plVar4 = lVar7;
              thunk_FUN_03f5d7b8(plVar4,lVar7);
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (0 < (int)uVar1) {
                uVar12 = 0;
                lVar7 = 0x20;
                do {
                  if (uVar1 <= uVar12) {
LAB_0749ed80:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  plVar5 = *(long **)(lVar9 + lVar7);
                  if (plVar5 == (long *)0x0) goto LAB_0749ed7c;
                  lVar13 = *plVar4;
                  uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
                  if (lVar13 == 0) goto LAB_0749ed7c;
                  if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_0749ed80;
                  *(undefined8 *)(lVar13 + lVar7) = uVar6;
                  thunk_FUN_03f5d7b8(lVar13 + lVar7,uVar6);
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  uVar12 = uVar12 + 1;
                  lVar7 = lVar7 + 8;
                } while ((int)uVar12 < (int)uVar1);
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_0749ed7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

