// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ResolveReferences
// address: 0x76cb348
// body: available
// range: 0x76cb348-0x76cbc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cb6c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cb99c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cbbf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cbbfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cbc00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_54;
  
  if ((DAT_09522737 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091c97a8);
    FUN_03f5c2a4(&DAT_091cb078);
    FUN_03f5c2a4(&DAT_091a1d98);
    FUN_03f5c2a4(&DAT_091a1da0);
    FUN_03f5c2a4(&DAT_091a1da8);
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_0917a1e8);
    FUN_03f5c2a4(&DAT_0917b0c0);
    FUN_03f5c2a4(&DAT_091a9850);
    FUN_03f5c2a4(&DAT_091a9858);
    FUN_03f5c2a4(&DAT_091aa5d8);
    FUN_03f5c2a4(&DAT_091f6eb0);
    DAT_09522737 = 1;
  }
  local_54 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == 0) goto LAB_076cb99c;
  lVar13 = *(long *)(param_2 + 0x118);
  lVar5 = param_2;
  if (lVar13 != 0) {
    uVar3 = System_String__StartsWith(lVar13,DAT_091f6eb0,4,0);
    if ((uVar3 & 1) != 0) {
      lVar13 = Newtonsoft_Json_Schema_JsonSchemaBuilder__UnescapeReference(uVar3,lVar13);
    }
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_076cb99c;
    lVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,lVar13,*(undefined8 *)(*plVar4 + 0x180));
    if (lVar5 == 0) {
      if ((uVar3 & 1) == 0) {
LAB_076cb644:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar14 = *(undefined8 *)(param_2 + 0x118);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091ff6d0);
        uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar6,uVar14,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar9 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar9,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d19f8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar6);
      }
      lVar13 = *(long *)(param_2 + 0x118);
      lVar5 = FUN_03f5c394(DAT_0917fcc8,1);
      if (lVar5 == 0) goto LAB_076cb99c;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_076cbc00:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined2 *)(lVar5 + 0x20) = 0x23;
      if (lVar13 == 0) goto LAB_076cb99c;
      lVar5 = System_String__TrimStart(lVar13,lVar5,0);
      lVar13 = FUN_03f5c394(DAT_0917fcc8,1);
      if (lVar13 == 0) goto LAB_076cb99c;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_076cbc00;
      *(undefined2 *)(lVar13 + 0x20) = 0x2f;
      if ((lVar5 == 0) ||
         (plVar4 = (long *)System_String__Split(lVar5,lVar13,1,0), plVar4 == (long *)0x0))
      goto LAB_076cb99c;
      plVar15 = *(long **)(param_1 + 0x30);
      if (0 < (int)plVar4[3]) {
        uVar3 = 0;
        uVar10 = plVar4[3] & 0xffffffff;
        plVar7 = plVar4;
        do {
          if (uVar10 <= uVar3) goto LAB_076cbc00;
          uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__UnescapeReference
                            (plVar7,plVar4[uVar3 + 4]);
          if (plVar15 == (long *)0x0) goto LAB_076cb99c;
          iVar1 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
          lVar5 = *plVar15;
          if (iVar1 == 1) {
            pcVar11 = *(code **)(lVar5 + 0x248);
            uVar9 = *(undefined8 *)(lVar5 + 0x250);
LAB_076cb610:
            plVar7 = (long *)(*pcVar11)(plVar15,uVar6,uVar9);
            plVar15 = plVar7;
            if (plVar7 == (long *)0x0) goto LAB_076cb644;
          }
          else {
            iVar1 = (**(code **)(lVar5 + 0x228))(plVar15,*(undefined8 *)(lVar5 + 0x230));
            if ((iVar1 == 2) ||
               (plVar7 = (long *)(**(code **)(*plVar15 + 0x228))
                                           (plVar15,*(undefined8 *)(*plVar15 + 0x230)),
               (int)plVar7 == 3)) {
              uVar10 = System_Int32__TryParse(uVar6,&local_54,0);
              iVar1 = local_54;
              if (((uVar10 & 1) != 0) &&
                 ((-1 < local_54 && (iVar2 = FUN_04ad8a88(plVar15,DAT_091c97a8), iVar1 < iVar2)))) {
                local_a0 = CONCAT44(local_a0._4_4_,local_54);
                uVar6 = FUN_03f5c42c(DAT_09535420,&local_a0);
                pcVar11 = *(code **)(*plVar15 + 0x248);
                uVar9 = *(undefined8 *)(*plVar15 + 0x250);
                goto LAB_076cb610;
              }
              goto LAB_076cb644;
            }
          }
          uVar10 = (ulong)*(uint *)(plVar4 + 3);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(plVar4 + 3));
      }
      if ((plVar15 == (long *)0x0) ||
         (lVar5 = Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(param_1,plVar15), lVar5 == 0
         )) goto LAB_076cb644;
    }
  }
  if (*(char *)(lVar5 + 0x120) != '\0') {
    return lVar5;
  }
  plVar4 = *(long **)(lVar5 + 0xf8);
  *(undefined1 *)(lVar5 + 0x120) = 1;
  if (plVar4 == (long *)0x0) {
LAB_076cb83c:
    plVar4 = *(long **)(lVar5 + 0x98);
    if (plVar4 == (long *)0x0) {
LAB_076cb9a0:
      plVar4 = (long *)(lVar5 + 0xa8);
      if (*plVar4 != 0) {
        lVar13 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1);
        *plVar4 = lVar13;
        thunk_FUN_03f5d7b8(plVar4,lVar13);
      }
      if (*(long *)(lVar5 + 200) != 0) {
        lVar13 = FUN_04b082f8(*(long *)(lVar5 + 200),DAT_091cb078);
        if (lVar13 == 0) goto LAB_076cb99c;
        FUN_05668c84(&local_a0,lVar13,DAT_091aa5d8);
        puStack_78 = puStack_98;
        local_80 = local_a0;
        uStack_68 = uStack_88;
        local_70 = uStack_90;
        local_a0 = 0;
        puStack_98 = &local_80;
        while (uVar3 = FUN_07181930(&local_80,DAT_091a1da0), uVar6 = local_70, (uVar3 & 1) != 0) {
          plVar4 = *(long **)(lVar5 + 200);
          uVar9 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1,uStack_68);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar13 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar3 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917a1e8) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_076cba90;
              }
              uVar3 = uVar3 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar3 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a1e8,1);
LAB_076cba90:
          (*(code *)*puVar8)(plVar4,uVar6,uVar9,puVar8[1]);
        }
        FUN_0718192c(&local_80,DAT_091a1d98);
      }
      if (*(long *)(lVar5 + 0xb8) != 0) {
        lVar13 = FUN_04b082f8(*(long *)(lVar5 + 0xb8),DAT_091cb078);
        if (lVar13 == 0) goto LAB_076cb99c;
        FUN_05668c84(&local_a0,lVar13,DAT_091aa5d8);
        puStack_78 = puStack_98;
        local_80 = local_a0;
        uStack_68 = uStack_88;
        local_70 = uStack_90;
        local_a0 = 0;
        puStack_98 = &local_80;
        while (uVar3 = FUN_07181930(&local_80,DAT_091a1da0), uVar6 = local_70, (uVar3 & 1) != 0) {
          plVar4 = *(long **)(lVar5 + 0xb8);
          uVar9 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1,uStack_68);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar13 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar3 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917a1e8) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_076cbb88;
              }
              uVar3 = uVar3 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar3 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a1e8,1);
LAB_076cbb88:
          (*(code *)*puVar8)(plVar4,uVar6,uVar9,puVar8[1]);
        }
        FUN_0718192c(&local_80,DAT_091a1d98);
      }
      plVar4 = (long *)(lVar5 + 0xc0);
      if (*plVar4 == 0) {
        return lVar5;
      }
      lVar13 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1);
      *plVar4 = lVar13;
      thunk_FUN_03f5d7b8(plVar4,lVar13);
      return lVar5;
    }
    iVar1 = 0;
    do {
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a0d0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076cb8a4;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a0d0,0);
LAB_076cb8a4:
      iVar2 = (*(code *)*puVar8)(plVar4,puVar8[1]);
      if (iVar2 <= iVar1) goto LAB_076cb9a0;
      plVar4 = *(long **)(lVar5 + 0x98);
      if (plVar4 == (long *)0x0) break;
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0c0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076cb90c;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b0c0,0);
LAB_076cb90c:
      uVar6 = (*(code *)*puVar8)(plVar4,iVar1,puVar8[1]);
      uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1,uVar6);
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0c0) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_076cb97c;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b0c0,1);
LAB_076cb97c:
      (*(code *)*puVar8)(plVar4,iVar1,uVar6,puVar8[1]);
      plVar4 = *(long **)(lVar5 + 0x98);
      iVar1 = iVar1 + 1;
    } while (plVar4 != (long *)0x0);
  }
  else {
    iVar1 = 0;
    do {
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917a0d0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076cb740;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a0d0,0);
LAB_076cb740:
      iVar2 = (*(code *)*puVar8)(plVar4,puVar8[1]);
      if (iVar2 <= iVar1) goto LAB_076cb83c;
      plVar4 = *(long **)(lVar5 + 0xf8);
      if (plVar4 == (long *)0x0) break;
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0c0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_076cb7a8;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b0c0,0);
LAB_076cb7a8:
      uVar6 = (*(code *)*puVar8)(plVar4,iVar1,puVar8[1]);
      uVar6 = Newtonsoft_Json_Schema_JsonSchemaBuilder__ResolveReferences(param_1,uVar6);
      lVar13 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b0c0) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_076cb818;
          }
          uVar3 = uVar3 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b0c0,1);
LAB_076cb818:
      (*(code *)*puVar8)(plVar4,iVar1,uVar6,puVar8[1]);
      plVar4 = *(long **)(lVar5 + 0xf8);
      iVar1 = iVar1 + 1;
    } while (plVar4 != (long *)0x0);
  }
LAB_076cb99c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

