// rea decompile_all
// name: __cxa_demangle
// address: 0x4031158
// body: available
// range: 0x4031158-0x4031713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403170c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4031710 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  void *pvVar13;
  void *local_13d8;
  ulong local_13d0;
  ulong local_13c8;
  undefined8 local_13c0;
  undefined4 local_13b8;
  byte *local_13b0;
  byte *local_13a8;
  undefined8 *local_13a0;
  undefined8 *puStack_1398;
  undefined8 **local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 *local_1288;
  undefined8 *puStack_1280;
  undefined8 **local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *local_1170;
  undefined8 *local_1168;
  undefined8 **local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 *local_1118;
  undefined8 *local_1110;
  undefined8 **local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 *local_10e0;
  undefined8 *local_10d8;
  undefined2 *local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined2 local_10a8;
  undefined1 local_10a6;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined4 local_1090;
  long local_1080;
  undefined8 uStack_1078;
  long *local_80;
  
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    *param_4 = 0xfffffffd;
    return (void *)0x0;
  }
  sVar4 = strlen((char *)param_1);
  local_13a8 = param_1 + sVar4;
  local_1390 = &local_1288;
  local_1278 = &local_1170;
  uStack_1140 = 0;
  local_1148 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  local_1108 = &local_10e0;
  uStack_1120 = 0;
  local_1128 = 0;
  local_10d0 = &local_10a8;
  uStack_12a0 = 0;
  local_12a8 = 0;
  local_1160 = &local_1118;
  local_10a8 = 1;
  uStack_1290 = 0;
  local_1298 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_1268 = 0;
  local_1270 = 0;
  uStack_1258 = 0;
  uStack_1260 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  uStack_1240 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  uStack_1208 = 0;
  local_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  local_10a6 = 0;
  local_10a0 = 0xffffffffffffffff;
  local_1090 = 0;
  local_1098 = 0;
  uStack_1078 = 0;
  local_1080 = 0;
  local_13a0 = &local_1388;
  puStack_1398 = &local_1388;
  local_1288 = &local_1270;
  puStack_1280 = &local_1270;
  local_1170 = &local_1158;
  local_1168 = &local_1158;
  local_1118 = &local_1100;
  local_1110 = &local_1100;
  local_10e0 = &local_10c8;
  local_10d8 = &local_10c8;
  local_80 = &local_1080;
  if (sVar4 < 2) {
LAB_0403134c:
    local_13b0 = param_1;
    plVar5 = (long *)FUN_040324c0(&local_13b0);
    if (local_13a8 == local_13b0) {
LAB_04031618:
      if (plVar5 != (long *)0x0) goto LAB_0403161c;
    }
LAB_04031360:
    pvVar13 = (void *)0x0;
    uVar7 = 0xfffffffe;
  }
  else {
    if (*(short *)param_1 != 0x5a5f) {
      if (sVar4 == 2) goto LAB_0403134c;
      if (*(short *)param_1 == 0x5f5f && param_1[2] == 0x5a) {
        lVar9 = 3;
        goto LAB_04031430;
      }
      if (sVar4 < 4) goto LAB_0403134c;
      if (*(int *)param_1 == 0x5a5f5f5f) {
        lVar9 = 4;
      }
      else {
        if ((sVar4 == 4) || (*(int *)param_1 != 0x5f5f5f5f || param_1[4] != 0x5a))
        goto LAB_0403134c;
        lVar9 = 5;
      }
      local_13b0 = param_1 + lVar9;
      local_13d8 = (void *)FUN_040318a8(&local_13b0);
      plVar5 = (long *)0x0;
      if (local_13d8 != (void *)0x0) {
        if (((ulong)((long)local_13a8 - (long)local_13b0) < 0xd) ||
           (*(long *)local_13b0 != 0x695f6b636f6c625f ||
            *(long *)(local_13b0 + 5) != 0x656b6f766e695f6b)) goto LAB_04031360;
        pbVar10 = local_13b0 + 0xd;
        if (pbVar10 != local_13a8) {
          bVar1 = *pbVar10;
          if (bVar1 == 0x5f) {
            pbVar10 = local_13b0 + 0xe;
          }
          local_13b0 = pbVar10;
          if (local_13a8 == pbVar10) {
            bVar3 = true;
            pbVar11 = local_13a8;
          }
          else if (*pbVar10 - 0x3a < 0xfffffff6) {
            bVar3 = true;
            pbVar11 = pbVar10;
          }
          else {
            do {
              pbVar11 = local_13b0;
              if (*local_13b0 - 0x3a < 0xfffffff6) break;
              local_13b0 = local_13b0 + 1;
              pbVar11 = local_13a8;
            } while (local_13b0 != local_13a8);
            bVar3 = pbVar11 == pbVar10;
          }
          if ((bVar1 == 0x5f) && (bVar3)) goto LAB_04031360;
          pbVar10 = local_13b0;
          if (local_13a8 != pbVar11) {
            if (*pbVar11 != 0x2e) goto LAB_04031360;
            local_13b0 = local_13a8;
            pbVar10 = local_13b0;
          }
        }
        local_13b0 = pbVar10;
        plVar5 = (long *)FUN_0403240c(&local_13b0,"invocation function for block in ",&local_13d8);
      }
      goto LAB_04031618;
    }
    lVar9 = 2;
LAB_04031430:
    local_13b0 = param_1 + lVar9;
    plVar6 = (long *)FUN_040318a8(&local_13b0);
    plVar2 = local_80;
    pbVar10 = local_13b0;
    if (plVar6 == (long *)0x0) goto LAB_04031360;
    lVar9 = (long)local_13a8 - (long)local_13b0;
    plVar5 = plVar6;
    if (lVar9 != 0) {
      if (*local_13b0 != 0x2e) goto LAB_04031360;
      lVar8 = local_80[1];
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        plVar5 = malloc(0x1000);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = 0;
        *plVar5 = (long)plVar2;
        plVar5[1] = 0;
        local_80 = plVar5;
      }
      local_80[1] = lVar8 + 0x30;
      plVar5 = (long *)((long)local_80 + lVar8 + 0x10);
      *plVar5 = (long)&UNK_08fb0428;
      *(long **)((long)local_80 + lVar8 + 0x20) = plVar6;
      *(byte **)((long)local_80 + lVar8 + 0x28) = pbVar10;
      *(undefined1 *)((long)local_80 + lVar8 + 0x18) = 1;
      *(long *)((long)local_80 + lVar8 + 0x30) = lVar9;
      *(ushort *)((long)local_80 + lVar8 + 0x19) =
           *(ushort *)((long)local_80 + lVar8 + 0x19) & 0xf000 | 0x540;
      local_13b0 = local_13a8;
    }
LAB_0403161c:
    if (param_2 == (void *)0x0) {
      local_13c8 = 0;
    }
    else {
      local_13c8 = *param_3;
    }
    local_13d0 = 0;
    local_13b8 = 1;
    local_13c0 = 0xffffffffffffffff;
    local_13d8 = param_2;
    if (local_10e0 != local_10d8) {
      FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/cxa_demangle.cpp",400,&DAT_01a45042);
LAB_0403170c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_13d8);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_13d8);
    }
    uVar12 = local_13d0 + 1;
    if (local_13c8 < uVar12) {
      local_13c8 = local_13c8 * 2;
      uVar12 = local_13d0 + 0x3e1;
      if (local_13c8 < uVar12 || local_13c8 - uVar12 == 0) {
        local_13c8 = uVar12;
      }
      local_13d8 = realloc(local_13d8,local_13c8);
      if (local_13d8 == (void *)0x0) goto LAB_0403170c;
      uVar12 = local_13d0 + 1;
    }
    *(undefined1 *)((long)local_13d8 + local_13d0) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar12;
    }
    uVar7 = 0;
    local_13d0 = uVar12;
    pvVar13 = local_13d8;
  }
  plVar5 = local_80;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar7;
  }
  while (local_80 = plVar5, local_80 != (long *)0x0) {
    while (plVar5 = (long *)*local_80, local_80 != &local_1080) {
      plVar5 = local_80;
      local_80 = (long *)*local_80;
      free(plVar5);
      if (local_80 == (long *)0x0) goto LAB_040313a0;
    }
  }
LAB_040313a0:
  local_1080 = 0;
  uStack_1078 = 0;
  local_80 = &local_1080;
  if (local_10e0 != &local_10c8) {
    free(local_10e0);
  }
  if (local_1118 != &local_1100) {
    free(local_1118);
  }
  if (local_1170 != &local_1158) {
    free(local_1170);
  }
  if (local_1288 != &local_1270) {
    free(local_1288);
  }
  if (local_13a0 != &local_1388) {
    free(local_13a0);
  }
  return pvVar13;
}

