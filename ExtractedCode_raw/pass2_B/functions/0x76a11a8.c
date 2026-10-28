// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$GetSerializableMembers
// address: 0x76a11a8
// body: available
// range: 0x76a11a8-0x76a1dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a1748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1be0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a1d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076a1bdc) */
/* WARNING: Removing unreachable block (ram,0x076a1c08) */
/* WARNING: Removing unreachable block (ram,0x076a1da4) */

long Newtonsoft_Json_Serialization_DefaultContractResolver__GetSerializableMembers
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_0952261d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171250);
    FUN_03f5c2a4(&DAT_091c82a0);
    FUN_03f5c2a4(&DAT_091c82b8);
    FUN_03f5c2a4(&DAT_091cb260);
    FUN_03f5c2a4(&DAT_091cb508);
    FUN_03f5c2a4(&DAT_091716f0);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09178d00);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a608);
    FUN_03f5c2a4(&DAT_0917ace0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091d1d20);
    FUN_03f5c2a4(&DAT_091d1d50);
    FUN_03f5c2a4(&DAT_091d1d58);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091ae738);
    FUN_03f5c2a4(&DAT_091ae748);
    FUN_03f5c2a4(&DAT_091ae720);
    FUN_03f5c2a4(&DAT_0917c728);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091e8d40);
    FUN_03f5c2a4(&DAT_091e8d48);
    FUN_03f5c2a4(&DAT_09190010);
    FUN_03f5c2a4(&DAT_0920e078);
    DAT_0952261d = 1;
  }
  cVar2 = *(char *)(param_1 + 0x26);
  local_70 = 0;
  local_68 = (long *)0x0;
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetObjectMemberSerialization
                    (param_2,cVar2 != '\0',0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetFieldsAndProperties(param_2,0x3c,0);
  if (*(int *)(DAT_09190010 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09190010);
  }
  puVar12 = *(undefined8 **)(DAT_09190010 + 0xb8);
  lVar15 = puVar12[1];
  if (lVar15 == 0) {
    if (*(int *)(DAT_09190010 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190010);
      puVar12 = *(undefined8 **)(DAT_09190010 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_03f9944c(DAT_09178d00);
    FUN_05322d94(lVar15,uVar16,DAT_091e8d40,0);
    plVar6 = (long *)(*(long *)(DAT_09190010 + 0xb8) + 8);
    *plVar6 = lVar15;
    thunk_FUN_03f5d7b8(plVar6,lVar15);
  }
  plVar6 = (long *)FUN_04b0cafc(uVar5,lVar15,DAT_091cb508);
  lVar15 = thunk_FUN_03f9944c(DAT_0917c728);
  FUN_057e0400(lVar15,DAT_091ae720);
  if (iVar4 == 2) {
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_0917a608) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076a15a0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a608,0);
LAB_076a15a0:
      plVar6 = (long *)(*(code *)*puVar12)(plVar6,puVar12[1]);
joined_r0x076a15b8:
      do {
        do {
          local_68 = plVar6;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_076a162c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar12 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076a162c:
          uVar13 = (*(code *)*puVar12)(plVar6,puVar12[1]);
          plVar6 = local_68;
          if ((uVar13 & 1) == 0) {
            if (local_68 == (long *)0x0) {
              return lVar15;
            }
            lVar8 = *local_68;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar13 == 0) goto LAB_076a1794;
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_076a177c;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *local_68;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_0917ace0) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_076a1690;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar12 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ace0,0);
LAB_076a1690:
          plVar7 = (long *)(*(code *)*puVar12)(plVar6,puVar12[1]);
          plVar6 = local_68;
        } while (plVar7 == (long *)0x0);
      } while (((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8
                         ) != DAT_09184518)) ||
              (uVar13 = System_Reflection_FieldInfo__get_IsStatic(plVar7,0), lVar8 = DAT_091ae738,
              plVar6 = local_68, (uVar13 & 1) != 0));
      if (lVar15 != 0) {
        lVar10 = *(long *)(lVar15 + 0x10);
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar3 = *(uint *)(lVar15 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar3 + 1;
            plVar6 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            *plVar6 = (long)plVar7;
            thunk_FUN_03f5d7b8(plVar6,plVar7);
            plVar6 = local_68;
          }
          else {
            FUN_057e0c68(lVar15,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            plVar6 = local_68;
          }
          goto joined_r0x076a15b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetDataContractAttribute(param_2,0);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetFieldsAndProperties(param_2,uVar1,0);
    uVar16 = thunk_FUN_03f9944c(DAT_09178d00);
    FUN_05322d94(uVar16,0,DAT_091c82a0,0);
    uVar5 = FUN_04b0cafc(uVar5,uVar16,DAT_091cb508);
    lVar10 = FUN_04b08b78(uVar5,DAT_091cb260);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_0917a608) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076a17b0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a608,0);
LAB_076a17b0:
      plVar6 = (long *)(*(code *)*puVar12)(plVar6,puVar12[1]);
joined_r0x076a17c8:
      local_68 = plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_09185b10) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_076a1844;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076a1844:
      uVar13 = (*(code *)*puVar12)(plVar6,puVar12[1]);
      plVar6 = local_68;
      if ((uVar13 & 1) != 0) {
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *local_68;
        uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == DAT_0917ace0) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_076a18a8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ace0,0);
LAB_076a18a8:
        plVar7 = (long *)(*(code *)*puVar12)(plVar6,puVar12[1]);
        uVar5 = DAT_09171250;
        if (*(char *)(param_1 + 0x24) == '\0') goto code_r0x076a18c0;
        goto LAB_076a1910;
      }
      if (local_68 == (long *)0x0) goto LAB_076a1bfc;
      lVar8 = *local_68;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 == 0) goto LAB_076a1bb0;
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_076a1b98;
    }
  }
LAB_076a1d9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x076a18c0:
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar5,uVar5);
  }
  uVar13 = (**(code **)(*plVar7 + 0x1f8))(plVar7,uVar5,1,*(undefined8 *)(*plVar7 + 0x200));
  plVar6 = local_68;
  if ((uVar13 & 1) == 0) {
LAB_076a1910:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = FUN_057e1004(lVar10,plVar7,DAT_091ae748);
    lVar9 = DAT_091ae738;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = FUN_04bdd05c(plVar7,DAT_091d1d50);
      lVar9 = DAT_091ae738;
      if (lVar11 == 0) {
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = FUN_04bdd05c(plVar7,DAT_091d1d58);
        lVar9 = DAT_091ae738;
        if (lVar11 == 0) {
          plVar6 = local_68;
          if (lVar8 != 0) {
            if (*(int *)(DAT_09187480 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar11 = FUN_04bdd05c(plVar7,DAT_091d1d20);
            lVar9 = DAT_091ae738;
            plVar6 = local_68;
            if (lVar11 != 0) {
              if (lVar15 != 0) {
                lVar11 = *(long *)(lVar15 + 0x10);
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar3 = *(uint *)(lVar15 + 0x18);
                  if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                    plVar6 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                    *plVar6 = (long)plVar7;
                    thunk_FUN_03f5d7b8(plVar6,plVar7);
                    plVar6 = local_68;
                  }
                  else {
                    FUN_057e0c68(lVar15,plVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    plVar6 = local_68;
                  }
                  goto joined_r0x076a17c8;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          goto joined_r0x076a17c8;
        }
        if (lVar15 != 0) {
          lVar11 = *(long *)(lVar15 + 0x10);
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar3 = *(uint *)(lVar15 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar3 + 1;
              plVar6 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
              *plVar6 = (long)plVar7;
              thunk_FUN_03f5d7b8(plVar6,plVar7);
              plVar6 = local_68;
            }
            else {
              FUN_057e0c68(lVar15,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              plVar6 = local_68;
            }
            goto joined_r0x076a17c8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar15 != 0) {
        lVar11 = *(long *)(lVar15 + 0x10);
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar15 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar3 + 1;
            plVar6 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
            *plVar6 = (long)plVar7;
            thunk_FUN_03f5d7b8(plVar6,plVar7);
            plVar6 = local_68;
          }
          else {
            FUN_057e0c68(lVar15,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            plVar6 = local_68;
          }
          goto joined_r0x076a17c8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar15 != 0) {
      lVar11 = *(long *)(lVar15 + 0x10);
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar3 + 1;
          plVar6 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
          *plVar6 = (long)plVar7;
          thunk_FUN_03f5d7b8(plVar6,plVar7);
          plVar6 = local_68;
        }
        else {
          FUN_057e0c68(lVar15,plVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          plVar6 = local_68;
        }
        goto joined_r0x076a17c8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto joined_r0x076a17c8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_076a1b98:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_076a1bf0;
    }
  }
LAB_076a1bb0:
  puVar12 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_076a1bf0:
  (*(code *)*puVar12)(plVar6,puVar12[1]);
LAB_076a1bfc:
  uVar13 = Newtonsoft_Json_Utilities_TypeExtensions__AssignableToTypeName
                     (param_2,DAT_0920e078,0,&local_70);
  if ((uVar13 & 1) != 0) {
    uVar5 = thunk_FUN_03f9944c(DAT_09178d00);
    FUN_05322d94(uVar5,param_1,DAT_091c82b8,0);
    uVar5 = FUN_04b0cafc(lVar15,uVar5,DAT_091cb508);
    lVar15 = FUN_04b08b78(uVar5,DAT_091cb260);
  }
  uVar5 = DAT_091716f0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar6 = (long *)System_Type__GetTypeFromHandle(uVar5,0);
  if (plVar6 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar6 + 0x2b8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2c0));
    if ((uVar13 & 1) == 0) {
      return lVar15;
    }
    if (*(int *)(DAT_09190010 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar12 = *(undefined8 **)(DAT_09190010 + 0xb8);
    lVar8 = puVar12[2];
    if (lVar8 == 0) {
      if (*(int *)(DAT_09190010 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar12 = *(undefined8 **)(DAT_09190010 + 0xb8);
      }
      uVar5 = *puVar12;
      lVar8 = thunk_FUN_03f9944c(DAT_09178d00);
      FUN_05322d94(lVar8,uVar5,DAT_091e8d48,0);
      plVar6 = (long *)(*(long *)(DAT_09190010 + 0xb8) + 0x10);
      *plVar6 = lVar8;
      thunk_FUN_03f5d7b8(plVar6,lVar8);
    }
    uVar5 = FUN_04b0cafc(lVar15,lVar8,DAT_091cb508);
    lVar15 = FUN_04b08b78(uVar5,DAT_091cb260);
    return lVar15;
  }
  goto LAB_076a1d9c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_076a177c:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_076a1bcc;
    }
  }
LAB_076a1794:
  puVar12 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_076a1bcc:
  (*(code *)*puVar12)(plVar6,puVar12[1]);
  return lVar15;
}

