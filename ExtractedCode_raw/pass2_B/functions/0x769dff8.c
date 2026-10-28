// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetChildPrivateProperties
// address: 0x769dff8
// body: available
// range: 0x769dff8-0x769e563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769e55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769e560 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetChildPrivateProperties
               (long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((DAT_09522601 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4f18);
    FUN_03f5c2a4(&DAT_09178ed0);
    FUN_03f5c2a4(&DAT_0917a118);
    FUN_03f5c2a4(&DAT_0917b0f0);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091eef00);
    FUN_03f5c2a4(&DAT_091eef08);
    FUN_03f5c2a4(&DAT_09193ab0);
    FUN_03f5c2a4(&DAT_091eef10);
    FUN_03f5c2a4(&DAT_09193ab8);
    DAT_09522601 = 1;
  }
LAB_0769e0d0:
  do {
    param_2 = (long *)Newtonsoft_Json_Utilities_TypeExtensions__BaseType(param_2,0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__op_Inequality(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((param_2 == (long *)0x0) ||
       (lVar3 = (**(code **)(*param_2 + 0x868))(param_2,param_3,*(undefined8 *)(*param_2 + 0x870)),
       lVar3 == 0)) {
LAB_0769e55c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while ((int)*(ulong *)(lVar3 + 0x18) < 1);
  uVar2 = 0;
  uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
LAB_0769e14c:
  if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar12 = *(undefined8 *)(lVar3 + uVar2 * 8 + 0x20);
  lVar4 = thunk_FUN_03f9944c(DAT_09193ab0);
  Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    puVar10 = (undefined8 *)(lVar4 + 0x10);
    *puVar10 = uVar12;
    thunk_FUN_03f5d7b8(puVar10,uVar12);
    uVar12 = *puVar10;
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = Newtonsoft_Json_Utilities_ReflectionUtils__IsVirtual(uVar12);
    if ((uVar8 & 1) == 0) {
      uVar12 = *puVar10;
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = Newtonsoft_Json_Utilities_ReflectionUtils__IsPublic(uVar12);
      uVar12 = thunk_FUN_03f9944c(DAT_09178ed0);
      if ((uVar8 & 1) == 0) {
        FUN_05322d94(uVar12,lVar4,DAT_091eef00,0);
        iVar1 = FUN_04a67a60(param_1,uVar12,DAT_091c4f18);
        if (iVar1 == -1) {
          if (param_1 != (long *)0x0) {
            lVar4 = *param_1;
            uVar12 = *puVar10;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a118) goto LAB_0769e44c;
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
LAB_0769e43c:
            puVar10 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a118,2);
            goto LAB_0769e45c;
          }
        }
        else if (param_1 != (long *)0x0) {
          lVar4 = *param_1;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b0f0) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0769e48c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b0f0,0);
LAB_0769e48c:
          uVar12 = (*(code *)*puVar7)(param_1,iVar1,puVar7[1]);
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189d88);
          }
          uVar8 = Newtonsoft_Json_Utilities_ReflectionUtils__IsPublic(uVar12);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_1;
            uVar12 = *puVar10;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b0f0) {
                  puVar10 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0769e51c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b0f0,1);
LAB_0769e51c:
            (*(code *)*puVar10)(param_1,iVar1,uVar12,puVar10[1]);
          }
          goto LAB_0769e46c;
        }
      }
      else {
        FUN_05322d94(uVar12,lVar4,DAT_091eef08,0);
        iVar1 = FUN_04a67a60(param_1,uVar12,DAT_091c4f18);
        if (iVar1 != -1) goto LAB_0769e46c;
        if (param_1 != (long *)0x0) {
          lVar4 = *param_1;
          uVar12 = *puVar10;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917a118) goto LAB_0769e44c;
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          goto LAB_0769e43c;
        }
      }
    }
    else {
      lVar5 = thunk_FUN_03f9944c(DAT_09193ab8);
      Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass44_1___ctor(lVar5,0);
      if (lVar5 != 0) {
        plVar11 = (long *)(lVar5 + 0x18);
        *plVar11 = lVar4;
        thunk_FUN_03f5d7b8(plVar11,lVar4);
        if (*plVar11 != 0) {
          uVar12 = *(undefined8 *)(*plVar11 + 0x10);
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar6 = (long *)Newtonsoft_Json_Utilities_ReflectionUtils__GetBaseDefinition(uVar12);
          if ((plVar6 == (long *)0x0) ||
             (lVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0)),
             lVar4 == 0)) {
            if ((*plVar11 == 0) || (plVar6 = *(long **)(*plVar11 + 0x10), plVar6 == (long *)0x0))
            goto LAB_0769e55c;
            lVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          }
          *(long *)(lVar5 + 0x10) = lVar4;
          thunk_FUN_03f5d7b8();
          uVar12 = thunk_FUN_03f9944c(DAT_09178ed0);
          FUN_05322d94(uVar12,lVar5,DAT_091eef10,0);
          iVar1 = FUN_04a67a60(param_1,uVar12,DAT_091c4f18);
          if (iVar1 != -1) goto LAB_0769e46c;
          if ((*plVar11 != 0) && (param_1 != (long *)0x0)) {
            lVar4 = *param_1;
            uVar12 = *(undefined8 *)(*plVar11 + 0x10);
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a118) goto LAB_0769e44c;
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            goto LAB_0769e43c;
          }
        }
      }
    }
  }
  goto LAB_0769e55c;
LAB_0769e44c:
  puVar10 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
LAB_0769e45c:
  (*(code *)*puVar10)(param_1,uVar12,puVar10[1]);
LAB_0769e46c:
  uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar2 = uVar2 + 1;
  if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar2) goto LAB_0769e0d0;
  goto LAB_0769e14c;
}

