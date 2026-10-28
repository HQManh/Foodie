// rea decompile_all
// name: System.Runtime.Remoting.Messaging.LogicalCallContext$$Clone
// address: 0x749d1b0
// body: available
// range: 0x749d1b0-0x749d80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749d358 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d7e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d7f4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d800 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749d808 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Messaging_LogicalCallContext__Clone(long param_1)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_0952135b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822b0);
    FUN_03f5c2a4(&DAT_091822b8);
    FUN_03f5c2a4(&DAT_091857b0);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_0920e088);
    DAT_0952135b = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09187ca0);
  System_Object___ctor(lVar5,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar6 = (long *)System_Runtime_Remoting_Messaging_CallContextRemotingData__Clone();
    lVar15 = DAT_091822b0;
    if (lVar5 == 0) goto LAB_0749d7e0;
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091822b0 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091822b0))
      goto LAB_0749d354;
      *(long **)(lVar5 + 0x18) = plVar6;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) goto LAB_0749d354;
    }
    thunk_FUN_03f5d7b8(lVar5 + 0x18,plVar6);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar6 = (long *)System_Runtime_Remoting_Messaging_CallContextSecurityData__Clone();
    lVar15 = DAT_091822b8;
    if (lVar5 == 0) goto LAB_0749d7e0;
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091822b8 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091822b8)) {
LAB_0749d354:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6);
      }
      *(long **)(lVar5 + 0x20) = plVar6;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar15)) goto LAB_0749d354;
    }
    thunk_FUN_03f5d7b8(lVar5 + 0x20,plVar6);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (lVar5 == 0) goto LAB_0749d7e0;
  }
  else {
    if (lVar5 == 0) goto LAB_0749d7e0;
    *(long *)(lVar5 + 0x28) = *(long *)(param_1 + 0x28);
    thunk_FUN_03f5d7b8();
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(lVar5 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  if ((plVar6 == (long *)0x0) ||
     (iVar4 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0)), iVar4 < 1)) {
    return lVar5;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (plVar6 != (long *)0x0) {
        do {
          lVar15 = *plVar6;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_0749d6b4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0749d6b4:
          uVar17 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar17 & 1) == 0) {
            return lVar5;
          }
          plVar8 = (long *)System_Runtime_Remoting_Messaging_LogicalCallContext__get_Datastore
                                     (lVar5);
          lVar15 = *plVar6;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_09185a30) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_0749d71c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,0);
LAB_0749d71c:
          plVar10 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar15 = *plVar6;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_09185a30) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0749d77c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,1);
LAB_0749d77c:
          uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) break;
          if ((plVar10 != (long *)0x0) && (*plVar10 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar10,DAT_09535468,uVar14);
          }
          (**(code **)(*plVar8 + 0x318))(plVar8,plVar10,uVar14,*(undefined8 *)(*plVar8 + 800));
        } while( true );
      }
    }
    else if (plVar6 != (long *)0x0) {
      do {
        lVar15 = *plVar6;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0749d448;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0749d448:
        uVar17 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar17 & 1) == 0) {
          return lVar5;
        }
        lVar15 = *plVar6;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == DAT_09185a30) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0749d4a4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,0);
LAB_0749d4a4:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) break;
        if (*plVar8 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar8);
        }
        uVar9 = System_String__Equals(plVar8,DAT_0920e088,0);
        plVar10 = (long *)System_Runtime_Remoting_Messaging_LogicalCallContext__get_Datastore(lVar5)
        ;
        lVar15 = *plVar6;
        uVar2 = *(ushort *)(lVar15 + 0x12e);
        uVar17 = (ulong)uVar2;
        if ((uVar9 & 1) == 0) {
          if (uVar2 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_09185a30) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0749d604;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,1);
LAB_0749d604:
          pcVar16 = (code *)*puVar7;
          uVar14 = puVar7[1];
          plVar13 = plVar6;
        }
        else {
          if (uVar2 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == DAT_09185a30) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0749d570;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,1);
LAB_0749d570:
          lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar15 = DAT_091857b0;
          if (lVar11 == 0) break;
          lVar12 = thunk_FUN_03f99350(lVar11,DAT_091857b0);
          lVar3 = DAT_091857b0;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar11,lVar15);
          }
          plVar13 = (long *)thunk_FUN_03f99350(lVar11,DAT_091857b0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar11,lVar3);
          }
          lVar15 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar3) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_0749d61c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar13,lVar3,0);
LAB_0749d61c:
          pcVar16 = (code *)*puVar7;
          uVar14 = puVar7[1];
        }
        uVar14 = (*pcVar16)(plVar13,uVar14);
        if (plVar10 == (long *)0x0) break;
        (**(code **)(*plVar10 + 0x318))(plVar10,plVar8,uVar14,*(undefined8 *)(*plVar10 + 800));
      } while( true );
    }
  }
LAB_0749d7e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

