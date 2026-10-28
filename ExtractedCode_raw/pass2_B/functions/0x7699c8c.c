// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionObject$$Create
// address: 0x7699c8c
// body: available
// range: 0x7699c8c-0x769a4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769a3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769a41c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769a424 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769a4e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_ReflectionObject__Create
               (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined4 local_64;
  
  if ((DAT_095225dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d38);
    FUN_03f5c2a4(&DAT_091caa48);
    FUN_03f5c2a4(&DAT_09178da0);
    FUN_03f5c2a4(&DAT_0917a218);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_0917dcc8);
    FUN_03f5c2a4(&DAT_091d7110);
    FUN_03f5c2a4(&DAT_091d7118);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_091d7130);
    FUN_03f5c2a4(&DAT_09189d48);
    FUN_03f5c2a4(&DAT_09189d58);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091eeeb8);
    FUN_03f5c2a4(&DAT_09193a78);
    FUN_03f5c2a4(&DAT_091eeec0);
    FUN_03f5c2a4(&DAT_09193a80);
    FUN_03f5c2a4(&DAT_091eeec8);
    FUN_03f5c2a4(&DAT_09193a88);
    DAT_095225dc = 1;
  }
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory(0)
  ;
  uVar3 = System_Reflection_MethodBase__op_Inequality(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__HasDefaultConstructor(param_1,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = thunk_FUN_03f9944c(DAT_09193a78);
      System_Object___ctor(lVar5,0);
      if (plVar2 == (long *)0x0) goto LAB_0769a3dc;
      lVar6 = FUN_03f5c420(*(undefined8 *)
                            (*plVar2 + (ulong)*(ushort *)(DAT_091d7110 + 0x50) * 0x10 + 0x140));
      uVar4 = (**(code **)(lVar6 + 8))(plVar2,param_1,lVar6);
      if (lVar5 == 0) goto LAB_0769a3dc;
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      thunk_FUN_03f5d7b8();
      uVar4 = thunk_FUN_03f9944c(DAT_0917dcc8);
      FUN_05c68e34(uVar4,lVar5,DAT_091eeeb8,0);
    }
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0769a3dc;
    uVar4 = (**(code **)(*plVar2 + 0x188))(plVar2,param_2,*(undefined8 *)(*plVar2 + 400));
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09189d58);
  Newtonsoft_Json_Utilities_ReflectionObject___ctor(lVar5,uVar4);
  if (param_3 != 0) {
    if (0 < (int)*(ulong *)(param_3 + 0x18)) {
      uVar3 = 0;
      uVar13 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_1 == (long *)0x0) goto LAB_0769a3dc;
        uVar4 = *(undefined8 *)(param_3 + uVar3 * 8 + 0x20);
        lVar6 = (**(code **)(*param_1 + 0x728))
                          (param_1,uVar4,0x14,*(undefined8 *)(*param_1 + 0x730));
        if (lVar6 == 0) goto LAB_0769a3dc;
        if (*(int *)(lVar6 + 0x18) != 1) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar11 = thunk_FUN_03fc39d4(&DAT_09201dd0);
          uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar11,uVar8,uVar4,0);
LAB_0769a4a8:
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar8 = thunk_FUN_03f9944c();
          System_ArgumentException___ctor(uVar8,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d7140);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar4);
        }
        plVar7 = (long *)FUN_04aff064(lVar6,DAT_091caa48);
        lVar6 = thunk_FUN_03f9944c(DAT_09189d48);
        System_Object___ctor(lVar6,0);
        iVar1 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(plVar7,0);
        if (iVar1 == 0x10) {
LAB_07699fa8:
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = Newtonsoft_Json_Utilities_ReflectionUtils__CanReadMemberValue(plVar7,0);
          if ((uVar13 & 1) != 0) {
            if ((plVar2 == (long *)0x0) ||
               (uVar8 = FUN_04d14e94(plVar2,plVar7,DAT_091d7118), lVar6 == 0)) goto LAB_0769a3dc;
            *(undefined8 *)(lVar6 + 0x18) = uVar8;
            thunk_FUN_03f5d7b8();
          }
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = Newtonsoft_Json_Utilities_ReflectionUtils__CanSetMemberValue(plVar7,0,0);
          if ((uVar13 & 1) != 0) {
            if ((plVar2 == (long *)0x0) ||
               (uVar8 = FUN_04d15244(plVar2,plVar7,DAT_091d7130), lVar6 == 0)) goto LAB_0769a3dc;
            *(undefined8 *)(lVar6 + 0x20) = uVar8;
            thunk_FUN_03f5d7b8();
          }
        }
        else {
          if (iVar1 != 8) {
            if (iVar1 != 4) {
              thunk_FUN_03fc39d4(&DAT_09182ff8);
              FUN_039afb80();
              uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              local_64 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(plVar7,0);
              uVar8 = thunk_FUN_03fc39d4(&DAT_09188010);
              uVar8 = FUN_03f5c42c(uVar8,&local_64);
              FUN_039b1d98(plVar7);
              uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
              uVar12 = thunk_FUN_03fc39d4(&DAT_09211db0);
              uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar4,uVar8,uVar11,0)
              ;
              goto LAB_0769a4a8;
            }
            goto LAB_07699fa8;
          }
          if (plVar7 == (long *)0x0) goto LAB_0769a3dc;
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8)
              != DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar7);
          }
          uVar13 = System_Reflection_MethodBase__get_IsPublic(plVar7,0);
          if ((uVar13 & 1) != 0) {
            lVar14 = (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
            if (lVar14 == 0) goto LAB_0769a3dc;
            uVar13 = *(ulong *)(lVar14 + 0x18);
            if (uVar13 == 0) {
              uVar8 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
              lVar9 = DAT_095353f8;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_095354b8);
              }
              uVar11 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
              uVar13 = System_Type__op_Inequality(uVar8,uVar11,0);
              if ((uVar13 & 1) == 0) {
                uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
                goto LAB_0769a1dc;
              }
              lVar14 = thunk_FUN_03f9944c(DAT_09193a80);
              System_Object___ctor(lVar14,0);
              if (plVar2 == (long *)0x0) goto LAB_0769a3dc;
              lVar9 = FUN_03f5c420(*(undefined8 *)
                                    (*plVar2 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 +
                                    0x140));
              uVar8 = (**(code **)(lVar9 + 8))(plVar2,plVar7,lVar9);
              if (lVar14 == 0) goto LAB_0769a3dc;
              *(undefined8 *)(lVar14 + 0x10) = uVar8;
              thunk_FUN_03f5d7b8();
              uVar8 = thunk_FUN_03f9944c(DAT_09178da0);
              FUN_05324070(uVar8,lVar14,DAT_091eeec0,0);
              if (lVar6 == 0) goto LAB_0769a3dc;
              puVar10 = (undefined8 *)(lVar6 + 0x18);
              *puVar10 = uVar8;
LAB_0769a2f0:
              thunk_FUN_03f5d7b8(puVar10,uVar8);
            }
            else {
LAB_0769a1dc:
              if ((int)uVar13 == 1) {
                uVar8 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
                lVar14 = DAT_095353f8;
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_095354b8);
                }
                uVar11 = System_Type__GetTypeFromHandle(lVar14 + 0x20,0);
                uVar13 = System_Type__op_Equality(uVar8,uVar11,0);
                if ((uVar13 & 1) != 0) {
                  lVar14 = thunk_FUN_03f9944c(DAT_09193a88);
                  System_Object___ctor(lVar14,0);
                  if (plVar2 != (long *)0x0) {
                    lVar9 = FUN_03f5c420(*(undefined8 *)
                                          (*plVar2 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10
                                          + 0x140));
                    uVar8 = (**(code **)(lVar9 + 8))(plVar2,plVar7,lVar9);
                    if (lVar14 != 0) {
                      *(undefined8 *)(lVar14 + 0x10) = uVar8;
                      thunk_FUN_03f5d7b8();
                      uVar8 = thunk_FUN_03f9944c(DAT_09174d38);
                      FUN_071cd244(uVar8,lVar14,DAT_091eeec8,0);
                      if (lVar6 != 0) {
                        puVar10 = (undefined8 *)(lVar6 + 0x20);
                        *puVar10 = uVar8;
                        goto LAB_0769a2f0;
                      }
                    }
                  }
                  goto LAB_0769a3dc;
                }
              }
            }
          }
        }
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberUnderlyingType(plVar7);
        if (lVar6 == 0) goto LAB_0769a3dc;
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
        thunk_FUN_03f5d7b8();
        if ((lVar5 == 0) || (plVar7 = *(long **)(lVar5 + 0x18), plVar7 == (long *)0x0))
        goto LAB_0769a3dc;
        lVar14 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917a218) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0769a394;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a218,1);
LAB_0769a394:
        (*(code *)*puVar10)(plVar7,uVar4,lVar6,puVar10[1]);
        uVar13 = (ulong)*(uint *)(param_3 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(param_3 + 0x18));
    }
    return lVar5;
  }
LAB_0769a3dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

