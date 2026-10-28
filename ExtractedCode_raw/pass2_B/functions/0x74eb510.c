// rea decompile_all
// name: System.Reflection.CustomAttributeData$$ToString
// address: 0x74eb510
// body: available
// range: 0x74eb510-0x74eba97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74eb9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeData__ToString(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_095215e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_0917a028);
    FUN_03f5c2a4(&DAT_0917a030);
    FUN_03f5c2a4(&DAT_0917b040);
    FUN_03f5c2a4(&DAT_0917b048);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f7f68);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_091f8550);
    DAT_095215e6 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  System_Reflection_CustomAttributeData__ResolveArguments(param_1);
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,0);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      uVar5 = System_String__Concat(DAT_092139f8,uVar5,DAT_091f7f68,0);
      if (plVar3 != (long *)0x0) {
        System_Text_StringBuilder__Append(plVar3,uVar5,0);
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 != (long *)0x0) {
          iVar2 = 0;
          do {
            lVar7 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917a030) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_074eb6e4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a030,0);
LAB_074eb6e4:
            iVar1 = (*(code *)*puVar6)(plVar4,puVar6[1]);
            if (iVar1 <= iVar2) {
              plVar4 = *(long **)(param_1 + 0x20);
              if (plVar4 != (long *)0x0) {
                lVar7 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 == 0) goto LAB_074eb83c;
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                goto LAB_074eb824;
              }
              break;
            }
            plVar4 = *(long **)(param_1 + 0x18);
            if (plVar4 == (long *)0x0) break;
            lVar7 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b048) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_074eb74c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b048,0);
LAB_074eb74c:
            auVar11 = (*(code *)*puVar6)(plVar4,iVar2,puVar6[1]);
            local_70 = auVar11;
            uVar5 = System_Reflection_CustomAttributeTypedArgument__ToString(local_70,0);
            System_Text_StringBuilder__Append(plVar3,uVar5,0);
            plVar4 = *(long **)(param_1 + 0x18);
            if (plVar4 == (long *)0x0) break;
            lVar7 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917a030) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_074eb7d0;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a030,0);
LAB_074eb7d0:
            iVar1 = (*(code *)*puVar6)(plVar4,puVar6[1]);
            iVar2 = iVar2 + 1;
            if (iVar2 < iVar1) {
              System_Text_StringBuilder__Append(plVar3,DAT_091f86e8,0);
            }
            plVar4 = *(long **)(param_1 + 0x18);
          } while (plVar4 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_074eb9fc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_074eb824:
    if (*(long *)(piVar10 + -2) == DAT_0917a028) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_074eb858;
    }
  }
LAB_074eb83c:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a028,0);
LAB_074eb858:
  iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  if (0 < iVar2) {
    System_Text_StringBuilder__Append(plVar3,DAT_091f86e8,0);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a028) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074eb8d4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a028,0);
LAB_074eb8d4:
      iVar1 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      lVar7 = DAT_091c0270;
      if (iVar1 <= iVar2) {
        lVar8 = *(long *)(DAT_091c0270 + 0x38);
        if (lVar8 == 0) {
          FUN_03f95ac8(DAT_091c0270);
          lVar8 = *(long *)(lVar7 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        System_Text_StringBuilder__AppendFormat
                  (plVar3,DAT_091f8550,**(undefined8 **)(lVar7 + 0xb8),0);
        (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        return;
      }
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) break;
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b040) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074eb93c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b040,0);
LAB_074eb93c:
      (*(code *)*puVar6)(&local_d0,plVar4,iVar2,puVar6[1]);
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      uStack_88 = uStack_b8;
      local_90 = uStack_c0;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uVar5 = System_Reflection_CustomAttributeNamedArgument__ToString(&local_a0);
      System_Text_StringBuilder__Append(plVar3,uVar5,0);
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) break;
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a028) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074eb9cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a028,0);
LAB_074eb9cc:
      iVar1 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      iVar2 = iVar2 + 1;
      if (iVar2 < iVar1) {
        System_Text_StringBuilder__Append(plVar3,DAT_091f86e8,0);
      }
      plVar4 = *(long **)(param_1 + 0x20);
    } while (plVar4 != (long *)0x0);
  }
LAB_074eb9fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

