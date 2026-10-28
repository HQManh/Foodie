// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonBinaryWriter$$CalculateSize
// address: 0x7717aec
// body: available
// range: 0x7717aec-0x7718027 inclusive
// range: 0x771816c-0x771824b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7717ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718024 to 0x89db2d0 FUN_089db2d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7718184 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718240 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718248 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07718128) */
/* WARNING: Removing unreachable block (ram,0x07718164) */

ulong Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize(ulong param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_60;
  long **pplStack_58;
  long *local_50;
  long *local_48;
  
  uVar6 = param_1;
  if ((DAT_095229e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181fc8);
    FUN_03f5c2a4(&DAT_09181fd8);
    FUN_03f5c2a4(&DAT_09181fd0);
    FUN_03f5c2a4(&DAT_09181ff0);
    FUN_03f5c2a4(&DAT_09182018);
    FUN_03f5c2a4(&DAT_09182020);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917aa10);
    FUN_03f5c2a4(&DAT_0917aa08);
    uVar6 = FUN_03f5c2a4(&DAT_09185b10);
    DAT_095229e2 = 1;
  }
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if (param_2 == (long *)0x0) {
LAB_07718158:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar6);
  }
  uVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  uVar10 = DAT_0917fc88;
  uVar6 = 8;
  switch(uVar2) {
  case 1:
  case 9:
  case 0x12:
    break;
  case 2:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182020 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182020 + 0x130) * 8 + -8) !=
        DAT_09182020)) goto LAB_0771815c;
    plVar15 = (long *)param_2[4];
    if (plVar15 == (long *)0x0) {
      iVar3 = 0;
    }
    else {
      if (*plVar15 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar15);
      }
      if (*(int *)(DAT_09181fd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar8 = (long *)**(long **)(DAT_09181fd8 + 0xb8);
      uVar6 = 0;
      if (plVar8 == (long *)0x0) goto LAB_07718158;
      iVar3 = (**(code **)(*plVar8 + 0x1f8))(plVar8,plVar15,*(undefined8 *)(*plVar8 + 0x200));
    }
    *(int *)((long)param_2 + 0x2c) = iVar3;
    uVar1 = iVar3 + 5;
    if ((char)param_2[6] == '\0') {
      uVar1 = iVar3 + 1;
    }
    uVar6 = (ulong)uVar1;
    goto LAB_07718130;
  case 3:
    if ((*(byte *)(DAT_09181ff0 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181ff0 + 0x130) * 8 + -8) ==
        DAT_09181ff0)) {
      local_48 = (long *)Newtonsoft_Json_Bson_BsonObject__GetEnumerator(param_2);
      pplStack_58 = &local_48;
      local_60 = 0;
      if (local_48 != (long *)0x0) {
        iVar3 = 4;
        do {
          plVar15 = local_48;
          lVar14 = *local_48;
          uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_07717df8;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_07717df8:
          uVar6 = (*(code *)*puVar9)(plVar15,puVar9[1]);
          plVar15 = local_48;
          if ((uVar6 & 1) == 0) {
            if (local_48 == (long *)0x0) goto LAB_0771812c;
            lVar14 = *local_48;
            uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar6 == 0) goto LAB_077180b0;
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_07718098;
          }
          if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = *local_48;
          uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917aa08) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_07717e5c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917aa08,0);
LAB_07717e5c:
          lVar14 = (*(code *)*puVar9)(plVar15,puVar9[1]);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar4 = Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize
                            (param_1,*(undefined8 *)(lVar14 + 0x10));
          iVar5 = Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize
                            (param_1,*(undefined8 *)(lVar14 + 0x18));
          iVar3 = iVar3 + iVar4 + iVar5 + 1;
        } while (local_48 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_0771815c;
  case 4:
    if ((*(byte *)(DAT_09181fc8 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181fc8 + 0x130) * 8 + -8) ==
        DAT_09181fc8)) {
      local_50 = (long *)Newtonsoft_Json_Bson_BsonArray__GetEnumerator(param_2);
      pplStack_58 = &local_50;
      local_60 = 0;
      if (local_50 != (long *)0x0) {
        lVar14 = 0;
        iVar3 = 4;
        do {
          plVar15 = local_50;
          lVar7 = *local_50;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_07717f60;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_50,DAT_09185b10,0);
LAB_07717f60:
          uVar6 = (*(code *)*puVar9)(plVar15,puVar9[1]);
          plVar15 = local_50;
          if ((uVar6 & 1) == 0) {
            if (local_50 != (long *)0x0) {
              uVar6 = FUN_089db2d0(*local_50);
              return uVar6;
            }
            goto LAB_0771812c;
          }
          if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *local_50;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917aa10) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_07717fc4;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_50,DAT_0917aa10,0);
LAB_07717fc4:
          uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
          iVar4 = Newtonsoft_Json_Utilities_MathUtils__IntLength(lVar14,0);
          iVar5 = Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize(param_1,uVar10);
          iVar3 = iVar5 + iVar3 + iVar4 + 2;
          lVar14 = lVar14 + 1;
        } while (local_50 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0771815c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  case 5:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09181fd0 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181fd0 + 0x130) * 8 + -8) !=
        DAT_09181fd0)) goto LAB_0771815c;
    lVar14 = param_2[4];
    if (lVar14 == 0) goto LAB_07718158;
    lVar7 = thunk_FUN_03f99350(lVar14,DAT_0917fc88);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar14,uVar10);
    }
    uVar6 = (ulong)(*(int *)(lVar7 + 0x18) + 5);
    goto LAB_07718130;
  case 6:
  case 10:
    uVar6 = 0;
    break;
  case 7:
    uVar6 = 0xc;
    break;
  case 8:
    uVar6 = 1;
    break;
  case 0xb:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182018 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182018 + 0x130) * 8 + -8) !=
        DAT_09182018)) goto LAB_0771815c;
    iVar3 = Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize(param_1,param_2[4]);
    iVar4 = Newtonsoft_Json_Bson_BsonBinaryWriter__CalculateSize(param_1,param_2[5]);
    uVar6 = (ulong)(uint)(iVar4 + iVar3);
LAB_07718130:
    *(int *)(param_2 + 3) = (int)uVar6;
    break;
  default:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    local_60 = CONCAT71(local_60._1_7_,uVar2);
    uVar11 = thunk_FUN_03fc39d4(&DAT_09182028);
    uVar11 = FUN_03f5c42c(uVar11,&local_60);
    uVar12 = thunk_FUN_03fc39d4(&DAT_09211f30);
    uVar10 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar10,uVar11,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar11 = thunk_FUN_03f9944c();
    uVar12 = thunk_FUN_03fc39d4(&DAT_09223b08);
    System_ArgumentOutOfRangeException___ctor(uVar11,uVar12,uVar10,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091c4160);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar10);
  case 0x10:
    uVar6 = 4;
  }
  return uVar6;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_07718098:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_077180e8;
    }
  }
LAB_077180b0:
  puVar9 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_077180e8:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_0771812c:
  uVar6 = (ulong)(iVar3 + 1);
  goto LAB_07718130;
}

