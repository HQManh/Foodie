// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaWriter$$WriteSchema
// address: 0x76c9bc0
// body: available
// range: 0x76c9bc0-0x76caadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76caab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caabc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caad0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76caad8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076caa60) */
/* WARNING: Removing unreachable block (ram,0x076ca618) */
/* WARNING: Removing unreachable block (ram,0x076caad4) */
/* WARNING: Removing unreachable block (ram,0x076caacc) */

void Newtonsoft_Json_Schema_JsonSchemaWriter__WriteSchema(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98 [2];
  undefined2 local_94 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long **pplStack_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09522767 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0250);
    FUN_03f5c2a4(&DAT_0917a0d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917a5d8);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_0917aca8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b0c0);
    FUN_03f5c2a4(&DAT_091b7030);
    FUN_03f5c2a4(&DAT_091b7038);
    FUN_03f5c2a4(&DAT_0917dc60);
    FUN_03f5c2a4(&DAT_0917dc20);
    FUN_03f5c2a4(&DAT_0917dc80);
    FUN_03f5c2a4(&DAT_0921cb60);
    FUN_03f5c2a4(&DAT_0921f750);
    FUN_03f5c2a4(&DAT_092215f0);
    FUN_03f5c2a4(&DAT_0921a8f0);
    FUN_03f5c2a4(&DAT_0921b040);
    FUN_03f5c2a4(&DAT_0921f6f0);
    FUN_03f5c2a4(&DAT_09217220);
    FUN_03f5c2a4(&DAT_0921f6f8);
    FUN_03f5c2a4(&DAT_0921a3f8);
    FUN_03f5c2a4(&DAT_0921b2d8);
    FUN_03f5c2a4(&DAT_0921ba70);
    FUN_03f5c2a4(&DAT_0921a800);
    FUN_03f5c2a4(&DAT_092211f8);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_09221970);
    FUN_03f5c2a4(&DAT_09217238);
    FUN_03f5c2a4(&DAT_0921b2d0);
    FUN_03f5c2a4(&DAT_0921f3b8);
    FUN_03f5c2a4(&DAT_09223f50);
    FUN_03f5c2a4(&DAT_0921f318);
    FUN_03f5c2a4(&DAT_0921b378);
    FUN_03f5c2a4(&DAT_09220b88);
    FUN_03f5c2a4(&DAT_0921a580);
    FUN_03f5c2a4(&DAT_09221fa8);
    FUN_03f5c2a4(&DAT_09224370);
    FUN_03f5c2a4(&DAT_0921f310);
    FUN_03f5c2a4(&DAT_09220b90);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_09522767 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_09221fa8,0);
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar8 == (long *)0x0))
  goto LAB_076caac0;
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_076c9e74;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a0d0,4);
LAB_076c9e74:
  uVar6 = (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
  if ((uVar6 & 1) == 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x10), plVar8 == (long *)0x0))
    goto LAB_076caac0;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_076c9ee8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a0d0,2);
LAB_076c9ee8:
    (*(code *)*puVar2)(plVar8,param_2,puVar2[1]);
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if ((plVar8 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar8 + 0x578))(plVar8,*(undefined8 *)(*plVar8 + 0x580)), param_2 == 0)
     ) goto LAB_076caac0;
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,*(undefined8 *)(param_1 + 0x10),DAT_0921d180,
                     *(undefined8 *)(param_2 + 0x10));
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,*(undefined8 *)(param_1 + 0x10),DAT_09223f50,
                     *(undefined8 *)(param_2 + 0x18));
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
            (uVar3,*(undefined8 *)(param_1 + 0x10),DAT_0921a580,*(undefined8 *)(param_2 + 0x28));
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_80 = CONCAT62(local_80._2_6_,*(undefined2 *)(param_2 + 0x20));
  uVar3 = FUN_03f5c42c(DAT_0917dc20,&local_80);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_09221970,uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_90 = CONCAT62(local_90._2_6_,*(undefined2 *)(param_2 + 0x22));
  uVar3 = FUN_03f5c42c(DAT_0917dc20,&local_90);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_092215f0,uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_d0 = CONCAT62(local_d0._2_6_,*(undefined2 *)(param_2 + 0x24));
  uVar3 = FUN_03f5c42c(DAT_0917dc20,&local_d0);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921cb60,uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_a0 = CONCAT62(local_a0._2_6_,*(undefined2 *)(param_2 + 0x26));
  uVar3 = FUN_03f5c42c(DAT_0917dc20,&local_a0);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,uVar9,DAT_09224370,uVar3);
  if ((*(ulong *)(param_2 + 0x30) & 0xff) != 0) {
    Newtonsoft_Json_Schema_JsonSchemaWriter__WriteType
              (uVar3,DAT_09224510,*(undefined8 *)(param_1 + 0x10),*(ulong *)(param_2 + 0x30) >> 0x20
              );
  }
  if (*(char *)(param_2 + 0xd0) == '\0') {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_09217238,*(undefined8 *)(*plVar8 + 0x5e0));
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x708))
              (plVar8,*(undefined1 *)(param_2 + 0xd0),*(undefined8 *)(*plVar8 + 0x710));
  }
  else if (*(long *)(param_2 + 0xc0) != 0) {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_09217238,*(undefined8 *)(*plVar8 + 0x5e0));
    Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema
              (param_1,*(undefined8 *)(param_2 + 0xc0));
  }
  if (*(char *)(param_2 + 0xb0) == '\0') {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_09217220,*(undefined8 *)(*plVar8 + 0x5e0));
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x708))
              (plVar8,*(undefined1 *)(param_2 + 0xb0),*(undefined8 *)(*plVar8 + 0x710));
  }
  else if (*(long *)(param_2 + 0xa8) != 0) {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_09217220,*(undefined8 *)(*plVar8 + 0x5e0));
    Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema
              (param_1,*(undefined8 *)(param_2 + 0xa8));
  }
  Newtonsoft_Json_Schema_JsonSchemaWriter__WriteSchemaDictionaryIfNotNull
            (param_1,*(undefined8 *)(param_1 + 0x10),DAT_092211f8,*(undefined8 *)(param_2 + 0xb8));
  Newtonsoft_Json_Schema_JsonSchemaWriter__WriteSchemaDictionaryIfNotNull
            (param_1,*(undefined8 *)(param_1 + 0x10),DAT_09220b90,*(undefined8 *)(param_2 + 200));
  Newtonsoft_Json_Schema_JsonSchemaWriter__WriteItems(param_1,param_2);
  pplStack_78 = *(long ***)(param_2 + 0x68);
  local_80 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc60,&local_80);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f750,uVar3);
  uStack_88 = *(undefined8 *)(param_2 + 0x78);
  local_90 = *(undefined8 *)(param_2 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc60,&local_90);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f3b8,uVar3);
  local_94[0] = *(undefined2 *)(param_2 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc20,local_94);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921b2d8,uVar3);
  local_98[0] = *(undefined2 *)(param_2 + 0x82);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc20,local_98);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921b2d0,uVar3);
  local_a0 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc80,&local_a0);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f6f8,uVar3);
  local_a8 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc80,&local_a8);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f318,uVar3);
  local_b0 = *(undefined8 *)(param_2 + 0x84);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc80,&local_b0);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f6f0,uVar3);
  local_b8 = *(undefined8 *)(param_2 + 0x8c);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc80,&local_b8);
  Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull(uVar3,uVar9,DAT_0921f310,uVar3);
  uStack_c8 = *(undefined8 *)(param_2 + 0x58);
  local_d0 = *(undefined8 *)(param_2 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_03f5c42c(DAT_0917dc60,&local_d0);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,uVar9,DAT_0921a8f0,uVar3);
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,*(undefined8 *)(param_1 + 0x10),DAT_0921ba70,
                     *(undefined8 *)(param_2 + 0x100));
  uVar3 = Newtonsoft_Json_Schema_JsonSchemaWriter__WritePropertyIfNotNull
                    (uVar3,*(undefined8 *)(param_1 + 0x10),DAT_09220b88,
                     *(undefined8 *)(param_2 + 0x38));
  if (*(long *)(param_2 + 0xe0) != 0) {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_0921b040,*(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
        plVar8 = *(long **)(param_2 + 0xe0);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a5d0) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_076ca434;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5d0,0);
LAB_076ca434:
          local_68 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
          pplStack_78 = &local_68;
          local_80 = 0;
          do {
            plVar8 = local_68;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *local_68;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076ca4a8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_076ca4a8:
            uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
            plVar8 = local_68;
            if ((uVar6 & 1) == 0) {
              if (local_68 == (long *)0x0) goto LAB_076ca60c;
              lVar4 = *local_68;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 == 0) goto LAB_076ca5e4;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_076ca5cc;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *local_68;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917ac98) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076ca50c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ac98,0);
LAB_076ca50c:
            plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
            lVar4 = DAT_091c0250;
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            lVar5 = *(long *)(DAT_091c0250 + 0x38);
            if (lVar5 == 0) {
              FUN_03f95ac8(DAT_091c0250);
              lVar5 = *(long *)(lVar4 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,uVar3,**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)(*plVar8 + 0x2c0)
                      );
          } while( true );
        }
      }
    }
    goto LAB_076caac0;
  }
  goto LAB_076ca634;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076caa14:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076caa48;
    }
  }
LAB_076caa2c:
  puVar2 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_076caa48:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
LAB_076caa54:
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) goto LAB_076caac0;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
  goto LAB_076caa7c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076ca5cc:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076ca600;
    }
  }
LAB_076ca5e4:
  puVar2 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_076ca600:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
LAB_076ca60c:
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) goto LAB_076caac0;
  uVar3 = (**(code **)(*plVar8 + 0x5a8))(plVar8,*(undefined8 *)(*plVar8 + 0x5b0));
LAB_076ca634:
  if (*(long *)(param_2 + 0xf0) != 0) {
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_0921a3f8,*(undefined8 *)(*plVar8 + 0x5e0));
    lVar4 = DAT_091c0250;
    plVar8 = *(long **)(param_2 + 0xf0);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = *(long *)(DAT_091c0250 + 0x38);
    if (lVar5 == 0) {
      FUN_03f95ac8(DAT_091c0250);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (plVar8 == (long *)0x0) goto LAB_076caac0;
    uVar3 = (**(code **)(*plVar8 + 0x2b8))
                      (plVar8,uVar3,**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)(*plVar8 + 0x2c0)
                      );
  }
  if ((*(ulong *)(param_2 + 0xe8) & 0xff) != 0) {
    Newtonsoft_Json_Schema_JsonSchemaWriter__WriteType
              (uVar3,DAT_0921a800,*(undefined8 *)(param_1 + 0x10),*(ulong *)(param_2 + 0xe8) >> 0x20
              );
  }
  plVar8 = *(long **)(param_2 + 0xf8);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076ca75c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a0d0,0);
LAB_076ca75c:
    iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (0 < iVar1) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_076caac0;
      (**(code **)(*plVar8 + 0x5d8))(plVar8,DAT_0921b378,*(undefined8 *)(*plVar8 + 0x5e0));
      plVar8 = *(long **)(param_2 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_076caac0;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a0d0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076ca7e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a0d0,0);
LAB_076ca7e8:
      iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (iVar1 != 1) {
        plVar8 = *(long **)(param_1 + 0x10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
          plVar8 = *(long **)(param_2 + 0xf8);
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917a5d8) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_076ca8ec;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5d8,0);
LAB_076ca8ec:
            local_70 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
            pplStack_78 = &local_70;
            local_80 = 0;
            do {
              plVar8 = local_70;
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *local_70;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                    puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076ca960;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185b10,0);
LAB_076ca960:
              uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
              plVar8 = local_70;
              if ((uVar6 & 1) == 0) {
                if (local_70 == (long *)0x0) goto LAB_076caa54;
                lVar4 = *local_70;
                uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar6 == 0) goto LAB_076caa2c;
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                goto LAB_076caa14;
              }
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *local_70;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917aca8) {
                    puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_076ca9c4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917aca8,0);
LAB_076ca9c4:
              uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
              Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema(param_1,uVar3);
            } while( true );
          }
        }
        goto LAB_076caac0;
      }
      plVar8 = *(long **)(param_2 + 0xf8);
      if (plVar8 == (long *)0x0) goto LAB_076caac0;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b0c0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076ca8c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b0c0,0);
LAB_076ca8c0:
      uVar3 = (*(code *)*puVar2)(plVar8,0,puVar2[1]);
      Newtonsoft_Json_Schema_JsonSchemaWriter__ReferenceOrWriteSchema(param_1,uVar3);
    }
  }
LAB_076caa7c:
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x588))(plVar8,*(undefined8 *)(*plVar8 + 0x590));
    return;
  }
LAB_076caac0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

